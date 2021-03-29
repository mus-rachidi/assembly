section .text

global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

_ft_strdup:
	cmp rdi, 0
	je finish
	push rdi
	call _ft_strlen
	inc rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je finish
	mov rdi, rax
	pop rsi
	call _ft_strcpy
	ret
finish:
	mov rax, 0
	ret