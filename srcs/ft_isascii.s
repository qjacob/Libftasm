section .text
	global _ft_isascii

_ft_isascii:
	cmp rdi, 0
	jb exit
	cmp rdi, 127
	ja exit
	mov rax, 1
	ret

exit:
	mov rax, 0
	ret