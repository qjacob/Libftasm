section .text
	global _ft_tolower

_ft_tolower:
	cmp rdi, 65
	jb exit
	cmp rdi, 90
	ja exit
	add rdi, 97
	sub rdi, 65
	mov rax, rdi
	ret

exit:
	mov rax, rdi
	ret