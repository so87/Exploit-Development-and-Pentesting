section .data
cmd db '/bin/sh',0x0

section .text

global _start

_start:
;execve("/bin/sh", {"/bin/sh", NULL}, NULL)
mov eax, 11
lea ebx, [cmd]
mov ecx, 0
push ecx
push ebx
mov ecx, esp
mov edx, 0
int 0x80


