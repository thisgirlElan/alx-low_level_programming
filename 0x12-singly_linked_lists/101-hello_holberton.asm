section .data
hello db "Hello, Holberton", 10
len equ $ - hello

section .text
global _start

_start:
; Write the string to stdout
mov eax, 4
mov ebx, 1
mov ecx, hello
mov edx, len
int 0x80

; Exit the program
mov eax, 1
xor ebx, ebx
int 0x80
