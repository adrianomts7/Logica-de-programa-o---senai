#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota,media,soma;
	int i;
	
	for(i = 1; i <= 3; i++){
		do{	
			printf("Digite a %i nota: ", i);
			scanf("%f", &nota);
		
		}while(nota < 0 || nota > 10);
		
		soma += nota;
	}
	
	media = soma / 3;
	
	if(media >= 7){
		printf("O aluno esta aprovado com a media %.1f", media);
	}else if(media >= 5 && media < 7){
		printf("O aluno esta em recuperação com a media %.1f", media);
	}else{
		printf("O aluno esta reprovado com a media %.1f", media);
	}
	

}

