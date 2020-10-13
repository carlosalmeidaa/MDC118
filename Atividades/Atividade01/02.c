#include <stdio.h>

// Escrever um programa em C que converta um número x de segundos em horas, minutos e segundos. //

int main() {
	int seg_1, horas, minutos, seg_2;
	printf("Insira os segundos: ");
	scanf("%d", &seg_1);
	
	horas = (seg_1/3600); 
	
	minutos = (seg_1 -(3600*horas))/60;
	
	seg_2 = (seg_1 -(3600*horas)-(minutos*60));
	
	printf("%d:%d:%d \n", horas, minutos, seg_2);
	
	return 0;
}
