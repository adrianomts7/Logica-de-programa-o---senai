#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota,media,soma;
	int i;
	
	do{
		for(i = 1; i <= 2; i++){
		printf("Digite a %i nota: ", i);
		scanf("%f", &nota);
		soma += nota;
	}
	}while(nota < 0 || nota > 10);
	
	media = soma / 2;
	
	printf("A Media do aluno %.1f", media);
	

}

