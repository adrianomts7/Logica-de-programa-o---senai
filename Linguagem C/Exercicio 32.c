#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main(){
	setlocale(LC_ALL,"");
	
	float notas[TAM];
	float media,soma = 0;
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("Digite a %i� Nota: ", i + 1);
		scanf("%f", &notas[i]);
		soma += notas[i];
		fflush(stdin);
	}
	
	system("cls");
	printf("Calculando M�dia!");
	sleep(2);
	system("cls");
	
	media = soma /(float)i;
	
	for(i = 0; i < TAM; i++){
		printf("A %i� Nota: %.1f\n",i + 1, notas[i]);
	}
	
	printf("M�dia: %.1f\n", media);
	
	return 0;
}
