
section .text
global _ft_strcmp

_ft_strcmp:
strcmp:
	xor rcx, rcx
	xor rax, rax
	xor rbx, rbx
next:
	mov al, byte[rdi + rcx]
	mov bl, byte[rsi + rcx]
	cmp al, 0
	je end
	cmp bl, 0
	je end
	inc rcx
	cmp al, bl
	je next

end:
	sub rax, rbx
ret