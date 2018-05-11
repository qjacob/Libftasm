section .text
	global _ft_isprint

_ft_isprint:
	cmp rdi, 32
	jb exit
	cmp rdi, 127
	jae exit
	mov rax, 1
	ret

exit:
	mov rax, 0
	ret