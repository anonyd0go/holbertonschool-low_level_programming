global main
section .data
text: db "Hello, World", 10
text_ln equ $-text

section .text
main:
    mov rax, 0x4
    mov rbx, 1
    mov rcx, text
    mov rdx, text_ln
    int 0x80

    mov rax, 0x1
    mov rbx, 0
    int 0x80
