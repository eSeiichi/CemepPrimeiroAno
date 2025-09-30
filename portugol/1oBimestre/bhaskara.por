programa
{
	inclua biblioteca Matematica --> Mat	
	funcao inicio()
	{
		real delta , a , b , c , x1 , x2
		escreva("Este programa realiza a fórmula de Bhaskara\nDigite o valor de a: ")
		leia(a)
		escreva("Digite o valor de b: ")
		leia(b)
		escreva("Digite o valor de c: ")
		leia(c)
		delta = Mat.potencia(b, 2.0) + (-4 * a * c)
		x1 = (-b + Mat.raiz(delta, 2.0))/(2 * a)
		x2 = (-b - Mat.raiz(delta, 2.0))/(2 * a)
		escreva("O valor de \"delta\" é: ",delta,", o valor do primeiro x é: ",x1," e o valor do segundo x é: ",x2)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 538; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */