#include <stdio.h>
#include <stdlib.h>

int main() {
    int data, mes, ano;
    printf("Insira a data no formato dd-mm-aaaa: ");
    if (scanf("%d-%d-%d", &data, &mes, &ano) == 3) { 
       printf("Formato BR:  %d/%d/%d\n", data, mes, ano);
       printf("Formato US:  %d/%d/%d\n", mes, data, ano);
    } else {
       printf("inválido\n");
    }
    return 0;
}