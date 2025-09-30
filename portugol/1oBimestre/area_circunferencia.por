programa
{	
	inclua biblioteca Matematica -->mat
	funcao inicio()
	{
		real raio , area
		escreva("este programa calcula a área de uma circunferência\ndigite o valor do raio: ")
		leia(raio)
		area = mat.PI * mat.potencia(raio , 2.0)
		escreva("a área da circunferência é igual a: ",area)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 293; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */