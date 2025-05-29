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
            LDA		#42
            STA		SOPT1
            MOV 	#$FF, PTBDD

mainLoop:
			JSR 	TEMPO
			INC 	PTBD
			BRCLR 	7, PTBD,mainLoop
			BRCLR 	0,PTAD,mainLoop
			LDA 	PTBD
			CLR 	PTBD
			JSR 	TPM_TOF
			STA 	PTBD
            feed_watchdog
            BRA    mainLoop


			;S/ PROG TEMPO 
TEMPO:		
			LDHX 	#$FFFF
c			AIX 	#-1
			CPHX 	#0
			BNE 	c 
			RTS
			
			;S/ PROG TPM
		
TPM_TOF
			MOV 	#$0F, TPMSC ; BUSCLOCK + [PS]= 128 Pas IT local TOIE = 0

cont		BRCLR 	7,TPMSC,cont
			
			; RAZ TOF et ARRET
			;LDA 	TPMSC  étape de lecture
			MOV 	#$00,TPMSC ; arrêt 
			
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
