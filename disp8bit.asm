.MODEL SMALL
.STACK
.DATA

M1 DB 10,13,"Enter an 8 bit number: $"
M2 DB 10,13,"Displaying the Entered Number: $"
N1 DB ?

.CODE
.STARTUP
;FOR 8 BIT NUMBER
MOV AH,09  ;msg for input
LEA DX, M1
INT 21H

MOV AH,01 ;for 1st digit
INT 21H
SUB AL,30H
MOV CL,4
SHL AL,CL
MOV BL,AL

MOV AH,01 ; for 2nd digit
INT 21H
SUB AL,30H
ADD BL,AL
MOV N1, BL

MOV AH,09 ;displaying msg
LEA DX,M2
INT 21H

MOV BH, N1 ;for digit 1
AND BH,0F0H
MOV CL,4
SHR BH,CL
ADD BH,30H
MOV DL,BH
MOV AH,02
INT 21H


MOV BH, N1 ;for digit 2
AND BH,0FH
ADD BH,30H
MOV DL,BH
MOV AH,02
INT 21H

.EXIT 
END