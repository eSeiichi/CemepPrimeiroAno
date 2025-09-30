programa
{
	inclua biblioteca Matematica --> Mat	
	funcao inicio()
	{
		real c1 , c2 , h , h2 
		escreva("Este programa encontra o valor da hipotenusa.\nDigite o valor do primeiro cateto: ")
		leia(c1)
		escreva("Digite o valor do segundo cateto: ")
		leia(c2)
		h = Mat.potencia(c1, 2.0) + Mat.potencia(c2, 2.0)
		h2 = Mat.raiz(h, 2.0)
		escreva("O valor da hipotenusa é: ",h2)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 383; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */