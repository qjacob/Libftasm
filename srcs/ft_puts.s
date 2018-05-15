section .data
string:
	.newline db 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp
	mov rbp, rdi
	cmp rdi, 0
	je error
	call _ft_strlen
	mov rdx, rax
	mov rsi, rbp
	mov rdi, 1
	mov rax, 0x2000004
	syscall
	mov rdx, 1
	mov rdi, 1
	lea rsi, [rel string.newline]
	mov rax, 0x2000004
	syscall
	jmp end

end:
	pop rbp
	mov rax, 1
	ret

error:
	pop rbp
	mov rax, -1
	ret