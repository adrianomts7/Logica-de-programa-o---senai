#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float media = 0,nota;
	int i, soma = 0;
	
	for(i = 1; i <= 4; i++){
		printf("Digite %i Nota: ", i);
		scanf("%f ", &nota);
		soma += nota;
		
	}
	media = soma / 4;
	
	printf("A media do aluno: %f", media);
}
