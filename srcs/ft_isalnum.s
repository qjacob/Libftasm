section .text
	global _ft_isalnum

_ft_isalnum:
	cmp rdi, 48
	jl exit
	cmp rdi, 57
	jg upper
	mov rax, 1
	ret

upper:
	cmp rdi, 65
	jl exit
	cmp rdi, 90
	jg minus
	mov rax, 1
	ret

minus:
	cmp rdi, 97
	jl exit
	cmp rdi, 122
	jg exit
	mov rax, 1
	ret

exit:
	mov rax, 0
	ret