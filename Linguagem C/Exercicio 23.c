#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"");

    float nota,media = 0, soma = 0;
    int contador = 0;
    char continuar;

    do{
        printf("Digite a %i ª Nota: ", contador + 1);
        scanf("%f", &nota);
        soma += nota;
        contador ++;

        fflush(stdin);
        printf("Escolha uma opção com base no menu: \n");
        printf("s = Digitar mais uma nota. \n");
        printf("p = ver quantas notas foram digitadas.\n");
        printf("n = ver média aritmética. \n");
        scanf("%c", &continuar);

    }while(continuar == 's' || continuar == 'S');
    if(continuar == 'p' || continuar == 'P'){
            printf("%i Notas digitadas\n", contador);
    }

    media = soma / contador;

    printf("A Média: %.1f\n", media);

}