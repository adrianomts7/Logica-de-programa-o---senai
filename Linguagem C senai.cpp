#include <stdio.h>

int main(){
	// Declarando variaveis
	char nome [200] = "Cristiano"; // Cadeia
	char sexo = 'M'; // Caracter
	int idade = 20; // Inteiro
	float peso = 80.000; // Real
	
	//Exibindo Resultado
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter
	printf("Idade: %i \n", idade); // %i -> int -> inteiro
	printf("Peso: %f \n", peso);	// %f -> float -> real
	
	return 0;
	
}
