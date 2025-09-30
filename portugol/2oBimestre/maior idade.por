programa
{
	
	funcao inicio()
	{
		inteiro idade , restante
		escreva("Digite a sua idade: ")
		leia(idade)
		se (idade >= 18)
		{
			escreva("Você é maior de idade, pois possui ",idade," anos")
		}
		senao
		{
			restante = 18 - idade
			escreva("Você não é maior de idade, pois possui ", idade ," anos e faltam ", restante ," anos para chegar a maior idade")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 370; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */