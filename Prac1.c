/******************************************************************************
Código de ejemplos
******************************************************************************/

#include <stdio.h>
#include <inttypes.h>
/*
    Ejercicios de enmascaramientos.
    Se busca que imprima el valor que está comentado,
    alterando únicamente el valor anterior utilizando los operadores bitwise.
    Todas las conversiones deberían ser posibles con una sola operación.
*/
int main()
{
    uint16_t a = 0;
    uint32_t b = 0x1155;
    printf("\na = %X", a);
//  Como ejemplo se da el analisis de la primera operacion

//1 B0B0 
//       hex           bin
//  a = 0000 = 0000 0000 0000 0000  (valor original)
//      B0B0 = 1011 0000 1011 0000  (valor que se desea)
//  Observamos que todas las diferencias radica en que los bits tienen que estar habilitados,
//  por lo tanto usaremos el operador OR (|) para convertir esos bits en '1's

//    0000 0000 0000 0000  (valor original)
// OR 1011 0000 1011 0000  (mascara para lograrlo) = (1<<15) | (3<<12) | (1<<7) | (3<<4)
//------------------------------------------------
//    1011 0000 1011 0000  (valor que se desea)
    a |= (1<<15) | (3<<12) | (1<<7) | (3<<4);
    printf("\na = %X", a);
    
//2 BABA
//3 BEBE
//4 FE00
//5 FEAA
//6 0155
//7 0001
//8 0100
    /************************************
     * Ejercicios de apuntadores
     ************************************/
    b = ((~b) << 16) | b;
    uint16_t *ptr16 = &b;
    uint8_t *ptr8 = &b;
//9 DEADBEEF

    /************************************
     * Ejercicios de structs con campos de bits
     ************************************/
    // Crear una esturctura de 32 bits y mappearla sobre la variable 'b'
//10 BADDCODE
    

    return 0;
}
