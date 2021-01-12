BITS 64

section .text
    global strcmp

strcmp:
    xor rax, rax
    mov r8, rdi
    mov r9, rsi

_loopComp:
    mov r10b, byte [r8]
    mov r11b, byte [r9]
    cmp r10b, r11b
    jl _retCompMinus
    jg _retCompPlus

    cmp r8b, 0
    je _retCompEqual

    inc r8
    inc r9

    jmp _loopComp

_retCompEqual:
    mov rax, 0
    ret

_retCompPlus:
    mov rax, 1
    ret

_retCompMinus:
    mov rax, -1
    ret
