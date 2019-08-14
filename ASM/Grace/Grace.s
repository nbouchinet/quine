extern _fopen
extern _fprintf
global _start
;out
%macro FT 1
enter 0, 0
lea rdi, [rel n]
lea rsi, [rel w]
call _fopen
mov rdi, rax
lea rsi, [rel %1]
mov rdx, 10
mov rcx, 34
lea r8, [rel %1]
xor rax, rax
call _fprintf
leave
%endmacro
section .text
_start:
FT fm
ret
section .data
n db "Grace_kid.s", 0
w db "w", 0
fm db "extern _fopen%1$cextern _fprintf%1$cglobal _start%1$c;out%1$c%%macro FT 1%1$center 0, 0%1$clea rdi, [rel n]%1$clea rsi, [rel w]%1$ccall _fopen%1$cmov rdi, rax%1$clea rsi, [rel %%1]%1$cmov rdx, 10%1$cmov rcx, 34%1$clea r8, [rel %%1]%1$cxor rax, rax%1$ccall _fprintf%1$cleave%1$c%%endmacro%1$csection .text%1$c_start:%1$cFT fm%1$cret%1$csection .data%1$cn db %2$cGrace_kid.s%2$c, 0%1$cw db %2$cw%2$c, 0%1$cfm db %2$c%3$s%2$c"
