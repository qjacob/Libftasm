%define MACSYSCALL(NB) 0x2000000 | NB
%define WRITE 4
%define READ 3
%define BUFFSIZE 4096

section .data
	fmt: db "read ret: %d", 10, 0

section .bss
	buffer: resb BUFFSIZE + 1

; read(int fildes, void *buf, size_t nbyte);

; If successful, the number of bytes actually read is returned.  Upon reading end-of-file,
; zero is returned.  Otherwise, a -1 is returned and the global variable errno is set to
; indicate the error.

; optimal buffer size 4096 (page size)

section .text
	global _ft_cat
	extern _ft_strlen
	extern _printf

_ft_cat:
	cmp rdi, 0
	jl error
	je stdin
	push rdi
	lea rsi, [rel buffer]
	mov rdx, BUFFSIZE
	mov rax, MACSYSCALL(READ)
	syscall
	; call debug
	cmp rax, 0
	je exit
	mov rdi, 1
	lea rsi, [rel buffer]
	mov rdx, rax
	mov rax, MACSYSCALL(WRITE)
	syscall
	mov rax, 0
	pop rdi
	jmp _ft_cat
	ret

stdin:
	push rdi
	lea rsi, [rel buffer]
	mov rdx, BUFFSIZE
	mov rax, MACSYSCALL(READ)
	syscall
	mov rdi, 1
	lea rsi, [rel buffer]
	mov rdx, rax
	mov rax, MACSYSCALL(WRITE)
	syscall
	pop rdi
	jmp stdin
	mov rax, 0
	ret

error:
	pop rdi
	mov rax, 1
	ret

exit:
	pop rdi
	mov rax, 0
	ret