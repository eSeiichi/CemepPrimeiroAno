programa
{
	
	funcao inicio()
	{
		real salario , aumento , total
		cadeia nome
		escreva("Digite o seu nome: ")
		leia(nome)
		escreva("Digite o seu salário: ")
		leia(salario)
		se (salario < 1500.00)
		{
			aumento = salario * 3 / 10
			total = salario + aumento
			escreva(nome, " seu salário era de: ", salario ," e passou a ser de: ", total, " com um aumento de: ", aumento)
		}
		senao
		{
			escreva(nome, " seu salário é maior que 1500, logo não recebeu o aumento")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 490; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */