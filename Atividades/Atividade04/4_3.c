#include <stdio.h>

int main()
{
    char x;

    printf("Insira um caractere: ");
    scanf("%c", &x);


    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("'%c' é uma letra.", x);
    }
    else if(x >= '0' && x <= '9')
    {
        printf("'%c' é um dígito.", x);
    }
    else 
    {
        printf("'%c' é um caractere especial.", x);
    }

    return 0;
}