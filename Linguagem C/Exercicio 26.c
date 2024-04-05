#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");
   
    int valor, somaGeral = 0, somaPares = 0, contadorGeral = 0,
	maiorValor = INT_MIN, menorValor = INT_MAX;
    int pares = 0, impares = 0;
    float mediaGeral, mediaPares;
   
    printf("Digite um número: ");
    scanf("%i",&valor);
	
	while (valor != 0) {
        if (valor > 0) {
            contadorGeral++;
            somaGeral += valor;
			
			if(valor > maiorValor){
				maiorValor = valor;
			}
			if(valor < menorValor){
				menorValor = valor;
			}
			
			if (valor % 2 == 0) {
                // pares = pares + 1;
                pares++;
               
                //somaPares = somaPares + valor;
                somaPares += valor;
            } else {
                impares++;
            }
        }        
            printf("Digite um número: ");
            scanf("%i",&valor);
    }
   
    if (contadorGeral == 0) {
        printf("Não foi informado um número positivo.");
    } else {
        // cast
        // 2 -> 2.0
        mediaGeral = somaGeral / (float) contadorGeral;
        mediaPares = somaPares / (float) pares;
       
		printf("Quantidade de pares: %i \n", pares);
        printf("Quantidade de ímpares: %i \n", impares);
        printf("Média geral: %.1f \n", mediaGeral);
        printf("Média de números pares: %.1f \n", mediaPares);
        printf("O Maior Número informado: %i\n", maiorValor);
        printf("O Menor Número informado: %i\n", menorValor);
    }	
	return 0;
}
