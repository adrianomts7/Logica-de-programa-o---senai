#include <stdio.h>
#include <locale.h>
#include <limits.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "");
   
 	int opcao,contadorSalario = 0,somaSalario,contadorRespondeu = 0,filhosCidade,contadorFilhosdaCidade = 0;
	int somaFilhosdacidade,maiorSalario = INT_MIN,menorSalario = INT_MAX; 
	float salario,mediaSalario,mediafilhos;
	
	 
	 do{
 		printf("\nCod�go  \tDescri��o:");
		printf("\n1  \t\tAdicionar Pessoa");	
		printf("\n2 \t\tExibir Resultados e sair\n");	
		printf("Digite Qual op��o voc� deseja: ");
		scanf("%i", &opcao);
		fflush(stdin);
	
		switch(opcao){
			case 1:
				contadorRespondeu ++;
				printf("Digite o sal�rio da familia: ");
				scanf("%f", &salario);
				contadorSalario ++;
				somaSalario += salario;
				fflush(stdin);
				
				if(salario > maiorSalario){
					maiorSalario = salario;
				}
				
				if(salario < menorSalario){
					menorSalario = salario;
				}
				
				printf("Digite Quantas pessoas da sua casa � filha da cidade: ");
				scanf("%i", &filhosCidade);
				contadorFilhosdaCidade ++;
				somaFilhosdacidade += filhosCidade;
				fflush(stdin);
				break;
				
			case 2:
				printf("Finalizando Cadastro !");
				sleep(3);
				break;
				
			default:
				printf("Op��o Invalida!");
				sleep(2);
				system("cls");
		}
		
		system("cls");
		printf("Familia Cadastrada com sucesso!");
		sleep(3);
		system("cls");
	 
	 }while(opcao != 2);

	mediaSalario = somaSalario / (float) contadorSalario;
	mediafilhos = somaFilhosdacidade / (float) contadorFilhosdaCidade;

	printf("Total de familia que respondeu a pesquisa: %i\n", contadorRespondeu);
	printf("Media de sal�rio da popula��o: R$ %.2f\n", mediaSalario);
	printf("Media de Filhos da cidade: %.1f\n", mediafilhos);
	printf("Maior Sal�rio: %i\n", maiorSalario);
	printf("Menor Sal�rio: %i\n", menorSalario);

}
