#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");

    float nota,media = 0, soma = 0;
    int contador = 0;
    char continuar[10];

    do{
        printf("Digite a %i ª Nota: ", contador + 1);
        scanf("%f", &nota);
        soma += nota;
        contador ++;

        printf("Deseja inserir mais uma nota: ");
        scanf("%s", continuar);
    
    }while(strcmp(continuar, "s") == 0);

    media = soma / contador;

    printf("A Média: %.1f", media);

}