section .text
	global _ft_isdigit

_ft_isdigit:
	cmp rdi, 48
	jl exit
	cmp rdi, 57
	jg exit
	mov rax, 1
	ret

exit:
	mov rax, 0
	ret