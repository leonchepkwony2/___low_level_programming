section .data
    hello db "Hello, Holberton", 0x0a ; string to be printed
    format db "%s", 0x0a, 0       ; format string for printf

section .text
    global main

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp

    ; call printf to print the string
    mov rdi, format ; first argument: format string
    mov rsi, hello  ; second argument: string to be printed
    xor eax, eax    ; set RAX to 0 to indicate no floating point arguments
    call printf     ; call printf function

    ; clean up and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax    ; return 0 to indicate success
    ret
