#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL,"");
	
	int idade,contadorMulherSalario5K = 0,contadorSalarioMulher = 0;
	char sexo;
	int codigo = 0,contadorHomemSalario = 0,somaSalarioHomem,somaSalarioMulher;
	int maiorIdadeF = INT_MIN, menorIdadeF = INT_MAX,maiorIdadeM = INT_MIN,menorIdadeM = INT_MAX;
	float mediaSalarioMulher,mediaSalarioHomem,salario;

	printf("Codigo \t\tDescrição");
	printf("\n1 \t\tAdicionar Pessoa");
	printf("\n2 \t\tExibir Resultados");
	printf("\nDigite Qual opção você deseja: ");
	scanf("%i", &codigo);
	fflush(stdin);
	
	
	while(codigo == 1){
		
		if(codigo == 1){
			printf("Qual seu sexo (M/F): ");
			scanf("%c",&sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			
			if(sexo == 'F'){
				printf("Digite a sua idade: ");
				scanf("%i", &idade);
				fflush(stdin);
				
				if(idade > maiorIdadeF){
					maiorIdadeF = idade;
				}
				
				if(idade < menorIdadeF){
					menorIdadeF = idade;
				}
				
				printf("Digite o seu salário: ");
				scanf("%f", &salario);
				contadorSalarioMulher ++;
				somaSalarioMulher += salario;
				fflush(stdin);
				
				if(salario > 5000){
					contadorMulherSalario5K ++;
				}
			}
			
			if(sexo == 'M'){
				printf("Digite a sua idade: ");
				scanf("%i", &idade);
				fflush(stdin);
				
				if(idade > maiorIdadeM){
					maiorIdadeM = idade;
				}
				
				if(idade < menorIdadeM){
					menorIdadeM = idade;
				}
			
				printf("Digite o seu salário: ");
				scanf("%f", &salario);
				contadorHomemSalario ++;
				somaSalarioHomem += salario;
				fflush(stdin);
			
			}
		
			system("cls");
			printf("Pessoa Registrada com sucesso!");
			sleep(3);
			system("cls");
		} 
	
		printf("Codigo \t\tDescrição");
		printf("\n1 \t\tAdicionar Pessoa");
		printf("\n2 \t\tExibir Resultados");
		printf("\nDigite Qual opção você deseja: ");
		scanf("%i", &codigo);
		fflush(stdin);	
	}
	

	mediaSalarioHomem = somaSalarioHomem / (float) contadorHomemSalario;
	mediaSalarioMulher = somaSalarioMulher / (float) contadorSalarioMulher;

	printf("A Media do Salário dos Homens: %.2f\n", mediaSalarioHomem);
	printf("A Media do Salário dos Mulher: %.2f\n", mediaSalarioMulher);
	printf("Maior Idade dos Homens: %i\n", maiorIdadeM);
	printf("Menor Idade dos Homens: %i\n", menorIdadeM);
	printf("Maior Idade das Mulheres: %i\n", maiorIdadeF);
	printf("Menor Idade das Mulheres: %i\n", menorIdadeF);
	printf("Mulheres com salários acima de 5,000: %i\n", contadorMulherSalario5K);
}
