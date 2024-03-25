#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i, nota, soma = 0, media = 0;
	
	for(i = 1; i <= 4; i++){
		printf("Digite %i Nota: ", i);
		scanf("%i ", &nota);
		soma += nota;
		
	}
	media = soma / 4;
	
	printf("A media do aluno: %i", media);
}
