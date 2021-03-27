section .text
	global _ft_strlen

_ft_strlen:
	xor rax,rax
	loop:
	cmp byte[rdi], 0
	je exit
	inc rax
	inc rdi
	jmp loop

exit:
	ret