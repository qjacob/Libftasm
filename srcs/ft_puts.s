section .data
string:
	.newline db 10
	.null db "(null)", 10, 0

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
	jc stop
	mov rdx, 1
	mov rdi, 1
	lea rsi, [rel string.newline]
	mov rax, 0x2000004
	syscall
	jc stop
	jmp end

end:
	pop rbp
	mov rax, 1
	ret

error:
	mov rdi, 1
	lea rsi, [rel string.null]
	mov rdx, 7
	mov rax, 0x2000004
	syscall
	jc stop
	pop rbp
	mov rax, 1
	ret

stop:
	pop rbp
	mov rax, -1
	ret
