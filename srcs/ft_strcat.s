section .text
	global _ft_strcat

_ft_strcat:
	push rdi
	jmp loop_s1

loop_s1:
	cmp BYTE [rdi], 0
	je add_byte
	inc rdi
	jmp loop_s1

add_byte:
	mov al, BYTE [rsi]
	mov BYTE [rdi], al
	inc rsi
	inc rdi
	cmp BYTE [rsi], 0
	je exit
	jmp add_byte

exit:
	mov BYTE [rdi], 0
	pop rax
	ret