programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		real a , b , c
		escreva("este programa recebe dois valores e retorna o quadrado da soma entre eles \n digite o primeiro valor: ")
		leia(a)
		escreva("digite o segundo valor: ")
		leia(b)
		c = mat.potencia((a + b) , 2)
		escreva("o quadrado da soma dos valores é igual a ",c)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 360; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */