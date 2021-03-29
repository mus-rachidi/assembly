	section .text
	global _ft_read:
	extern ___error

_ft_read:
	mov rax, 0x2000003
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