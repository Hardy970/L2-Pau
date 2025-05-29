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
            
            MOV #$FF, PTBDD ; PortB en sortie

mainLoop:
            COM PTBD  ; complémente PTBD
            JSR TPM_TOF
            feed_watchdog
            STA SRS ; feed the watchdog
            BRA    mainLoop
 
TPM_TOF
			LDHX #7838 ; pour mettre la duree a 250 ms
			STHX TPMMODH
			MOV #$0F, TPMSC ; BUSCLOCK + [PS]= 128 Pas IT local TOIE = 0
cont		BRCLR 7,TPMSC,cont
			
			; RAZ TOF et ARRET
			LDA TPMSC ; étape de lecture
			MOV #$00,TPMSC ; arrêt 
			
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
