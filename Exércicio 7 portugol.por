programa {
  funcao inicio() {
    // Declarando variaveis
    inteiro primeiroNumero, segundoNumero, soma, produto, valorMaior, valorMenor
    real media
    // Pedindo dados ao usuario
    escreva("Escreva o primeiro n˙mero: ")
    leia(primeiroNumero)
    
    escreva("Escreva o Segundo N˙mero: ")
    leia(segundoNumero)

    // Fazendo os calculos necÈssarios
      soma = (primeiroNumero + segundoNumero)
      produto = (primeiroNumero * segundoNumero)
      media = (primeiroNumero + segundoNumero) / 2

    // Resultado
    escreva("A soma dos valores ", soma)
    escreva("\nO produto dos valores ",  produto)
    escreva("\nAs medias dos valores ",  media)

    se (primeiroNumero == segundoNumero)
      escreva("\nOs Valores s„o iguais")
    
    senao se(primeiroNumero > segundoNumero)
      escreva("\nO Maior valor digitado foi ", primeiroNumero, "\n … o menor valor foi ", segundoNumero)

    senao
      escreva("\nO Maior valor digitado foi ", segundoNumero, " \n… o menor valor foi ", primeiroNumero)
  }
}
