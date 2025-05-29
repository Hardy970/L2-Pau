;*******************************************************************
;* This stationery serves as the framework for a user application. *
;* For a more comprehensive program that demonstrates the more     *
;* advanced functionality of this processor, please see the        *
;* demonstration applications, located in the examples             *
;* subdirectory of the "Freescale CodeWarrior for HC08" program    *
;* directory.                                                      *
;*******************************************************************

; Include derivative-specific definitions
            INCLUDE 'derivative.inc'
;
; export symbols
;
            XDEF _Startup
            ABSENTRY _Startup

;
; variable/data section
;
            ORG    RAMStart         ; Insert your data definition here
ExampleVar: DS.B   1

;
; code section
;
            ORG    ROMStart

_Startup:
            LDHX   #RAMEnd+1        ; initialize the stack pointer0
            TXS
            CLI                     ; enable interrupts
            LDA #42
            STA SOPT1
            
            MOV #$FF, PTBDD

mainLoop:
            COM PTBD ; complémente PTBD
            NOP
            JSR ATTENTE_MTIM
            JSR ATTENTE_MTIM
            JSR ATTENTE_MTIM
            JSR ATTENTE_MTIM
            feed_watchdog
            STA SRS ; feed the watchdog
            BRA    mainLoop
 
ATTENTE_MTIM
			MOV #$08, MTIMCLK ; mot de configuration = $08 CLOCK = BUSCLOCK [PS] = 256
			MOV #77,MTIMMOD
			
			MOV #$0, MTIMSC ; lance compteur
			
			; TEST TOF = 1
cont		LDA MTIMSC
			BIT #$80
			BEQ cont
			
			; RAZ TOF et ARRET
			LDA MTIMSC ; étape de lecture
			MOV #$10, MTIMSC ; arrêt 
			
			RTS

;**************************************************************
;* spurious - Spurious Interrupt Service Routine.             *
;*             (unwanted interrupt)                           *
;**************************************************************
spurious:                           ; placed here so that security value
            NOP                     ; does not change all the time.
            RTI

;**************************************************************
;*                 Interrupt Vectors                          *
;**************************************************************
            ORG   $FFFA

            DC.W  spurious          ;
            DC.W  spurious          ; SWI
            DC.W  _Startup          ; Reset
