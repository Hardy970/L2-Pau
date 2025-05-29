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
           

;
; code section
;
            ORG    ROMStart

_Startup:
            LDHX   #RAMEnd+1        ; initialize the stack pointer
            TXS
            CLI                     ; enable interrupts
            LDA #42
            STA SOPT1
            MOV #$FF, PTBDD

mainLoop:	CLRA
			
			

			
			;Sens anti horaire
sah			MOV #12, PTBD
			JSR ATTENTE
			MOV #9, PTBD
			JSR ATTENTE
			MOV #3, PTBD
			JSR ATTENTE
			MOV #6, PTBD
			JSR ATTENTE
			INCA
			CMP #51
			BNE sah
		
			;Sens horaire
sh			MOV #6, PTBD
			JSR ATTENTE
			MOV #3, PTBD
			JSR ATTENTE
			MOV #9, PTBD
			JSR ATTENTE
			MOV #12, PTBD
			JSR ATTENTE
			DECA
			CMP #0
			BNE sh
            BRA    mainLoop
 
;S/PROG
			ORG $FB00
			
ATTENTE:    LDHX #2500			
b			AIX #-1
			CPHX #0
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
