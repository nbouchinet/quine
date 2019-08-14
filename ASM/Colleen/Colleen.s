extern _printf
global _main
section .text
;out
_f:
	ret
_main:
	;in
	enter 0, 0
	call _f
	lea rdi, [rel s]
	mov rsi, 10
	mov rdx, 34
	lea rcx, [rel s]
	xor rax, rax
	call _printf
	leave
	ret

section .data
s db "extern _printf%1$cglobal _main%1$csection .text%1$c;out%1$c_f:%1$c	ret%1$c_main:%1$c	;in%1$c	enter 0, 0%1$c	call _f%1$c	lea rdi, [rel s]%1$c	mov rsi, 10%1$c	mov rdx, 34%1$c	lea rcx, [rel s]%1$c	xor rax, rax%1$c	call _printf%1$c	leave%1$c	ret%1$c%1$csection .data%1$cs db %2$c%3$s%2$c"
