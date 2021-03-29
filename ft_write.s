	section .text
	global _ft_write:
	extern ___error

_ft_write:
	mov rax, 0x2000004
	syscall
	jc handle_err
	ret

handle_err:
	push rax
	call ___error
	pop rdi
	mov qword[rax] ,rdi 
	mov rax, -1
	ret