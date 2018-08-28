;hello3.asm  attempts to make the code position independent

section .text

global _start

_start:
;clear out the registers we are going to need
xor eax, eax
xor ebx, ebx
xor ecx, ecx
xor edx, edx

;write(int fd, char *msg, unsigned int len)
mov al, 4
mov bl, 1
;Owned!! =  4f,77,6e,65,64,21,21,0xa
;push \n,!,!,d
push 0x0a212164
;push e,n,w,O
push 0x656e774f
mov ecx, esp
mov dl, 8
int 0x80

;exit(int ret)
mov al,1
xor ebx, ebx
int 0x80

