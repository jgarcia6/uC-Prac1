.model tiny
;----- Insert INCLUDE "filename" directives here
;----- Insert EQU and = equates here
locals
.data
    Mens DB 'Hola Mundo',10,13,0
.code
    org 100h
;*************************************************************
; Procedimiento principal
;*************************************************************
principal proc
    mov sp,0fffh ; inicializar SP (Stack Pointer)
    @@ini0: mov dx,1
        @@ini1: mov cx,dx
            @@sigue: mov al,'x'
            call putchar
            loop @@sigue
            mov al,10
            call putchar
            mov al,13
            call putchar
            inc dx
            cmp dx,20
            jbe @@ini1
        jmp @@ini0
    ret ; nunca se llega aquí
endp
;***************************************************************
; procedimientos
;***************************************************************
putchar proc
    push ax
    push dx
    mov dl,al
    mov ah,2 ; imprimir caracter DL
    int 21h ; usando servicio 2 (ah=2)
    pop dx ; del int 21h
    pop ax
    ret
endp
end principal ; fin de programa (file