section .data
hello:
	.string db "Hello World!", 10
	.len equ $ - hello.string

section .text
	global _start
	global __main

_start:
	call __main
	ret

__main:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov rdi, 1
	lea rsi, [rel hello.string]
	mov rdx, hello.len
	mov rax, 0x2000004
	syscall
	leave
	ret