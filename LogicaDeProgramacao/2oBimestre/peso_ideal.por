programa
{
	
	funcao inicio()
	{
		real altura , nideal
		caracter genero
		escreva("Digite o seu gênero [f ou m]: ")
		leia(genero)
		escreva("Digite a sua altura: ")
		leia(altura)
		se (genero == 'f' ou genero == 'F')
		{	
			nideal = (62.1 * altura) - 44.7
			escreva("Seu peso ideal é: ",nideal)
		}
		senao
			se (genero == 'm' ou genero == 'M')
				{
					nideal = (72.7 * altura) - 58
					escreva("Seu peso ideal e de: ",nideal)	
				}
			senao
				escreva("Digite um gênero válido")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 492; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */