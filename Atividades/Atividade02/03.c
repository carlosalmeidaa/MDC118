#include <stdio.h>

// Escrever um programa em C que associe um valor quantitativo a uma nota qualitativa conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom e 5 = Ótimo.//

int main()
{

    int nota = 0;
    printf("Digite sua nota: \n");
    scanf("%d", &nota);

    switch (nota)
    {

    case 1:
        printf("Nota ruim. \n");
        break;

    case 2:
        printf("Nota insuficiente. \n");
        break;

    case 3:
        printf("Nota suficiente. \n");
        break;

    case 4:
        printf("Nota boa. \n");
        break;

    case 5:
        printf("Nota ótima. \n");
        break;
    }

    return 0;
}
