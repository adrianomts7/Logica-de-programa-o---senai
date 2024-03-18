#include <stdio.h>

int main(){
    
    int primeiro_numero, segundo_numero, soma, subtracao, multiplicacao, divisao;

    printf("Digite o Primeiro numero: ");
    scanf("%i", &primeiro_numero);

    printf("Digite o Segundo numero: ");
    scanf("%i", &segundo_numero);

    fflush(stdin);

    soma = primeiro_numero + segundo_numero;
    subtracao = primeiro_numero - segundo_numero;
    multiplicacao = primeiro_numero * segundo_numero;
    divisao = primeiro_numero / segundo_numero;
    fflush(stdin);
    
    printf("=== Exibindo Resultados ===\n");
    printf("O primeiro numero digitado: %i\n",primeiro_numero);
    printf("O segundo numero digitado: %i\n",segundo_numero);
    printf("A soma: %i \n", soma);
    printf("A subtracao: %i\n", subtracao);
    printf("A multiplicacao: %i\n", multiplicacao);
    printf("A Divisao: %i\n", divisao);
   
    return  0;
}
