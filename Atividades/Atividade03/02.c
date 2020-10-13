// Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci (o próximo é a soma dos dois anteriores). //

#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, i, numero = 10;

    for (i = 0; i < numero; ++i)
    {
        n3 = n1 + n2;
        printf(" %d \n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}