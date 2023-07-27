section .data
	hello db 'Hello, Holberton', 0xA, 0

section .text
	extern printf

	global main
main:
	push rbp
	mov rdi, hello
	call printf
	pop rbp
	
	mov rax, 60	; syscall: exit
	xor rdi, rdi	; status: 0
	syscall
