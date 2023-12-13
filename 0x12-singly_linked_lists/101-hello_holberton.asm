section .data
	hello db 'Hello, Holberton', 0

section .text
	global main
	extern printf

main:
	; prepare arguments for printf
	mov rdi, hello
	xor rax, rax ; zero out rax to pass only one argument to printf
	; call printf
	call printf
	; return from main
	ret
