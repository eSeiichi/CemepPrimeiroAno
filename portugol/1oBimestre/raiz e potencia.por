programa
{
	inclua biblioteca Matematica --> mat
	funcao inicio()
	{
		//entrada de dados
		real n, P, R
		escreva("Programa Raiz e Potência\n")
		escreva("Digite um número: ")
		leia(n)
		//processamento de dados
		P = mat.potencia(n, 2.0)
		R = mat.raiz(n, 2.0)
		//saídad de dados
		escreva("O resultado da potência de \"",n,"\" é: ",P,", e a Raiz é: ",R)
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