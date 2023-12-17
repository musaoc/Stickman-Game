;macrosss.inc 


Include Irvine32.inc



StartPrompt macro 
	pushad
	
	
	mWritex "Introducing first"
	
	mWritex "	The challenger from Eagle's Nest Dagestan Khabib Nurmagomedov"
	mov eax,5000
	call delay
	
	mWritex "Now!!! Introducing the Champion of the World,"
	call delay
	
	mWritex "	 Khamzat The Wolf Chimaev "
	popad
ENDM


dalayx MACRO MiliSecx
push eax
mov eax, MiliSecx
call delay
pop eax
ENDM





Player1Wins MACRO
	pushad
	mWritex "And the result of the contest!!!!!!"
	mWritex "The New Champion of the World!!!! Khabib Nurmagomedov "
	
	popad
	ENDM

Player2Wins MACRO
	pushad
	mWritex "And the result of the contest!!!!!!"
	mWritex "Still the Undisputeddddddd Champion of the World!!!! Khamzat The Wolf Chimaev"
	
	popad
	ENDM	




mWriteStyledText MACRO 

        pushad
        
        mov eax, white+(red*16)
		call setTextColor
		
        popad
ENDM


mCenterx macro row,col
push edx
mov dh,row ; row 10
mov dl,col ; column 20
call Gotoxy
pop edx
ENDM




mWritex MACRO Textx
LOCAL Texts
.data
	Texts Byte Textx,0
.code
pushad
	ECHO Writing String
	mov edx,offset Texts
	call WriteString
	call crlf
popad
ENDM



