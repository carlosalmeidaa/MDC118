#include <stdio.h>

// Escrever um programa em C que liste todos os múltiplos de 3, entre 1 e 100. //

int main()
{
    for (int numero = 0; numero <= 100; numero++)
    {
        if (numero % 3 == 0)
            printf("%d \n", numero);
    }

    return 0;
}
