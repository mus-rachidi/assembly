section .text
global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
_ft_strdup:
	push rdi
	call _ft_strlen
	inc rax
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je finish
	mov rdi, rax
	pop rsi
	push rax
	call _ft_strcpy
	pop rax
	ret
finish:
	mov rax, 0
	ret