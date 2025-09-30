programa
{
	
	funcao inicio()
	{
		inteiro NumA , NumB , a , b
		escreva("este programa troca os valores das variáveis NumA e NumB\ndigite um valor para NumA: ")
		leia(NumA)
		escreva("digite um valor para NumB: ")
		leia(NumB)
		a = NumA
		b = NumB
		NumA = b
		NumB = a
		escreva("NumA trornou-se ", NumA, " e NumB tornou-se ", NumB)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 334; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */