programa {
  funcao inicio() {
    // Declarando variaveis
    cadeia nome
    inteiro idade

    // Solicitando dados ao usu�rio
    escreva("Qual o seu Nome: ")
    leia(nome)

    escreva("Qual a sua idade: ")
    leia(idade)

    // Respondendo ao usuario
    se (idade < 16)
      escreva(nome, "Voc� n�o tem idade suficiente para votar")
    
    senao se (18 > idade < 65)
      escreva(nome, " Seu voto � obrigatorio")
    }
}
