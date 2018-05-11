section .text
	global _ft_isalpha

_ft_isalpha:
	cmp rdi, 64
	jbe exit
	cmp rdi, 90
	jae minus
	mov rax, 1
	ret

minus:
	cmp rdi, 96
	jbe exit
	cmp rdi, 123
	jae exit
	mov rax, 1
	ret

exit:
	mov rax, 0
	ret