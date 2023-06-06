section .data
    message db "Hello, Holberton\n", 0
    format db "%s", 10, 0

section .text
    extern printf

global _start
_start:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, message
    xor rax, rax  ; Clear RAX register for variadic functions
    call printf

    ; Exit the program
    mov eax, 60  ; System call number for exit
    xor edi, edi ; Exit status 0
    syscall
