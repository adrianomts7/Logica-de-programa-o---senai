#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float nota,media = 0, soma = 0;
    int contador = 0;
    char continuar;
	
    do{
        printf("Digite a %i � Nota: ", contador + 1);
        scanf("%f", &nota);
        soma += nota;
        contador ++;
		
		fflush(stdin);
        printf("Escolha uma op��o com base no menu: \n");
        printf("s = Digitar mais uma nota. \n");
        printf("p = ver quantas notas foram digitadas.\n");
        printf("n = ver m�dia aritm�tica. \n");
        printf("Insira a op��o desejada: ");
		scanf("%c", &continuar);
		continuar = toupper(continuar);
				
		system("cls");
    }while(continuar == 'S');
    if(continuar == 'P'){
            printf("%i Notas digitadas\n", contador);
    }
	
    media = soma / contador;

    printf("A M�dia: %.1f\n", media);

}
