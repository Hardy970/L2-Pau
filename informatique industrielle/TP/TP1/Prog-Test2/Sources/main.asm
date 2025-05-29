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
            LDHX   #RAMEnd+1        ; initialize the stack pointer
            TXS
            CLI                     ; enable interrupts
            ;arrêt chien de garde
            LDA	#42
            STA SOPT1

            ;MOV #FF,PTBDD ; absence du symbole $
            MOV #$FF,PTBDD
            ;MOV #0,PTBD ; non nécessaire 
            
            LDA #$01
            
boucle		STA PTBD
			ROLA
			JSR TEMPO
			BRA boucle
			
			
			
			

; S/PROG TEMPO 
			ORG $FB00
			
TEMPO		LDHX #$00FF
b			DECX
;b			AIX #-1
			;CPHX #0
			BNE b
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
