#include <stdio.h>
#include <locale.h>

#define MAX 10

int main(){
	setlocale(LC_ALL,"");
	
	float numeros[MAX],soma = 0;
	int i,numerosNegativos = 0;
	
	for(i = 0; i < MAX; i++){
		printf("Digite o %i� N�mero: ", i + 1);
		scanf("%f", &numeros[i]);
		fflush(stdin);
		
		if(numeros[i] < 0){
			numerosNegativos ++;
		}
		else{
			soma += numeros[i];
		}
	}
	
	for(i = 0; i < MAX; i++){
		printf("O %i� N�mero digitado: %.1f\n",i + 1,numeros[i]);
	}
	
	printf("Foram digitados %i N�mero(s) Negativos\n",numerosNegativos);
	printf("A Soma dos N�meros Positivos: %.1f\n", soma);
	return 0;
}
