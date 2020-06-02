.model tiny
.data
	b1 db 101010b 
	dw1 dw 101010b 
	dd1 dd 101010b
	
	b2 db 100
	dw2 dw 100
	dd2 dd 100 

	b3 db 3dh
	dw3 dw 3dh
	dd3 dd 3dh 
.code
 per dd -1
beg:
	lahf
	pnt2:
	Movzx eax, byte ptr[edx+esi*4 +6];error: operand must be register
	dec byte ptr [edx+esi*4+6]
	mov al,-1
	Imul Eax
	Imul bl
	cmp Eax,Ebx
	jz pnt1
	pnt1:	
	cmp al,bl
	jz pnt2	
	Add dword ptr[edx+esi*4+6], 100
	Add byte ptr[edx+esi*4+6], 100
	And al,110b
	Xchg al,byte ptr[edx+esi*4+6]
	dec byte ptr ds:[edx+esi*4+6]
	dec byte ptr fs:[edx+esi*4+6]
	dec byte ptr [edx+esi*4+6]

end beg