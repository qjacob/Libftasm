section .text
	global _ft_bzero
	global exit

_ft_bzero:
	cmp rsi, 0
	je exit
	mov BYTE [rdi], 0
	inc rdi
	dec rsi
	jmp _ft_bzero
	ret

exit:
	ret