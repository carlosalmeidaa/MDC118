#include <stdio.h>

// Escrever um programa em C que calcula o desconto sobre um valor com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.//

int main()
{

    float valor, desconto = 0;
    printf("Insira o valor: \n");
    scanf("%f", &valor);

    if (valor <= 100.0)
    {
        desconto = valor - (valor * 0.01 / 100);
        printf("Desconto de 1 porcento: %f \n", desconto);
    }

    else if (valor > 100.1 && valor <= 500.0)
    {
        desconto = valor - (valor * 0.5 / 100);
        printf("Desconto de 5 porcento: %f \n", desconto);
    }
    else if (valor > 500)
    {
        desconto = valor - (valor * 0.10 / 100);
        printf("Desconto de 10 porcento: %f \n", desconto);
    }

    return 0;
}