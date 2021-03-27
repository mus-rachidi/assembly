	section .text
	global  _ft_strcpy

_ft_strcpy:
	xor rcx, rcx

start_loop:
	cmp byte[rsi + rcx], 0
	jz ret
	mov ah, [rsi + rcx]
	mov [rdi + rcx], ah
	inc rcx
	jmp start_loop

ret:
	mov byte[rdi + rcx], 0
	mov rax, rdi
	ret