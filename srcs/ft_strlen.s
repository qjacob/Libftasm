section .text
	global _ft_strlen

_ft_strlen:
	push rcx
	push rbp
	mov rbp, rdi
	mov al, 0
	mov rcx, 0xffffffff
	repne scasb
	sub rdi, rbp
	mov rax, rdi
	dec rax
	pop rcx
	pop rbp
	ret