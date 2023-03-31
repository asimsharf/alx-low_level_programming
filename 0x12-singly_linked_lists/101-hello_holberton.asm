section .text
        global _start
_start:
    mov edx, len                ;length of message
    mov ecx, msg                ;message to print
    mov ebx, 1                  ;file descriptor
    mov eax, 4                  ;system call
    int 0x80                    ;to call kernel

section .data
msg db "Hello, Holberton",0xa,  ;message to print 0xa is for new line
len equ $ - msg                 ;length of message

section .bss
