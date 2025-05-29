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
            LDA #42
            STA SOPT1
            
            LDHX #7838
            STHX TPMMODH			; Fin de comptage
            MOV #$4F, TPMSC 		; Busclock
            						; autorisation locale IT
                        			; autorisation local TOIE =1
            MOV #$FF, PTBDD  		; PORT B en sortie	

mainLoop:
            NOP

            feed_watchdog
            BRA    mainLoop        

;**************************************************************
;* spurious - Spurious Interrupt Service Routine.             *
;*             (unwanted interrupt)                           *
;**************************************************************
			ORG $E200
IT_TOF_TPM:
			COM PTBD				; complémente PTBD
			LDA TPMSC				; étape 1 du RAZ TOF
			MOV #$4F,TPMSC			; RAZ TOF
			
			RTI
			
;**************************************************************
;*                 Interrupt Vectors                          *
;**************************************************************
            ORG   $FFF0

			FDB	  IT_TOF_TPM
			ORG	  $FFFE
            FDB  _Startup          ; Reset
