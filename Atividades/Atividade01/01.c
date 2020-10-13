#include <stdio.h>

// Escrever um programa em C que calcule o perímetro de uma circunferência (p = 2 x pi x raio, considerendo pi = 3.1416). //

int main()
{

    float pi = 3.1416;
    int raio = 0;

    printf("Insira o perímetro da circunferência: \n");
    scanf("%d", &raio);
    printf("Resultado: %f\n", 2 * pi * raio);

    return 0;
}
