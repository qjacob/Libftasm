section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0
	mov rcx, -1
	cld
	repne scasb
	not rcx
	dec rcx
	mov rax, rcx
	ret