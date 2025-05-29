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
            ORG    $0200     ; table de données en Ram à partir de l'adresse $0200
			FCB    12,9,3,6

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

mainLoop:
            LDHX #$0200
t           LDA ,X
            STA PTBD
            STHX $0250
            JSR ATTENTE
            LDHX $0250 
            INCX 
            CPHX #$0204
            BNE t
            BRA    mainLoop
 
;S/PROG
			ORG $FB00
			
ATTENTE:    LDHX #$FFFF				
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
