#include <stdio.h>

int main(){
    // Declarando Variaveis
    char nome[100];
    int idade,primeira_nota, segunda_nota, terceira_nota, quarta_nota;
    float media;

    // Pedindo Dados ao usuario
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite a idade do aluno: ");
    scanf("%i", &idade);

    fflush(stdin);
    
    printf("Digite Primeira Nota: " );
    scanf("%i" ,&primeira_nota);

    printf("Digite Segunda Nota: ");
    scanf("%i", &segunda_nota);

    printf("Digite a terceira nota: ");
    scanf("%i", &terceira_nota);

    printf("Digite Quarta Nota: ");
    scanf("%i", &quarta_nota);

    // Calculando a media
    media = (primeira_nota + segunda_nota + terceira_nota + quarta_nota) / 4;

    printf("=-=-= Exibindo Resultados =-=-=\n");
    printf("Nome do aluno: %s\n", nome);
    printf("Idade do aluno: %i\n", idade);
    printf("A primeira nota do aluno: %i, %i, %i, %i\n", primeira_nota,segunda_nota,terceira_nota,quarta_nota);
    printf("A Media dos alunos: %.2f\n",media);
    
    return 0;

}
