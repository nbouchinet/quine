section .text
extern _printf
;out
_f:
	ret

start:
	;in
	call _f
	lea rdi, [rel s]
	mov rsi, 10
	mov rdx, 34
	lea rcx, [rel s]
	call _printf
	ret

section .data
s db "section .text$1%cextern _printf$1%c;out%1$c_f:$1%c	ret%1$c%1$cstart:%1$c	;in%1$c	call _f%1$cmov rdi, s%1$cmov rsi, 10%1$cmov rdx, 34%1$cmov rcx, s%1$ccall _printf%1ret$c%1$csection .bss%1$c s: db %2$c%3$s%2$c"
