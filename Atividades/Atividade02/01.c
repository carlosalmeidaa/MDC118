#include <stdio.h>

// Escrever um programa em C que determine se um número é par ou impar. //

int main()
{

    int numero;
    printf("Insira um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("%d é par. \n", numero);
    else
        printf("%d é ímpar. \n", numero);

    return 0;
}
