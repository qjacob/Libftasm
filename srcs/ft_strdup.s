section .text
	global _ft_strdup
	global exit
	extern _ft_strlen
	extern _malloc
	extern _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	push rdi
	call _malloc
	cmp rax, 0
	je exit
	mov rsi, rbp
	pop rdx
	mov rdi, rax
	call _ft_memcpy
	pop rbp
	ret

exit:
	pop rbp
	pop rbp
	mov rax, 0
	ret