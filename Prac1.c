/******************************************************************************
Examples code
*******************************************************************************/

#include <stdio.h>
#include <inttypes.h>

// const, static, volatile
volatile static char c = 'y';


#if 0
void funcion(char b)
{
    static char d = 'a';
    printf("\nd = %c", d);
    d++;
}
#endif

int main()
{
    char a = 'x';
    printf("\na = %c", a);
    a = 'y';
    funcion(a);
    return 0;
}
