section .data
    message db "Hello, Holberton", 0

section .text
    extern printf

    global _start

_start:
    mov rdi, message
    xor rax, rax
    call printf

    xor edi, edi
    mov eax, 60
    syscall