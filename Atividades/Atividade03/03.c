// Escrever um programa em C que calcule o fatorial de um número inteiro. //

#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long fact = 1;
    printf("Insira um número: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Erro!.");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            fact *= i;
        }
        printf("Fatorial de %d = %llu \n", n, fact);
    }

    return 0;
}
