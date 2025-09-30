programa
{
	inclua biblioteca Matematica -->mat
	funcao inicio()
	{
		real c , a , b 
		escreva("este programa recebe dois valores e retorna a soma de seus quadrados\ndigite o primeiro valor: ")
		leia(a)
		escreva("digite o segundo valor: ")
		leia(b)
		c = mat.potencia(a , 2) + mat.potencia(b , 2)
		escreva("o resultado da soma dos quadrados resultou em ", c)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 190; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */