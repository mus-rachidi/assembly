
	section .text
	global _ft_read:
	extern ___error

_ft_read:
	mov rax, 0x2000003
	syscall
	jc handle_err
	ret

handle_err:
	mov rbx, rax
	push rsp
	call ___error
	pop rsp
	mov [rax], rbx
	mov rax, -1
	ret