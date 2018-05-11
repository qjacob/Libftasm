section .text
	global _ft_toupper

_ft_toupper:
	cmp rdi, 97
	jb exit
	cmp rdi, 122
	ja exit
	add rdi, 65
	sub rdi, 97
	mov rax, rdi
	ret

exit:
	mov rax, rdi
	ret