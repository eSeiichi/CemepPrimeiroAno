/* Faça um programa que receba o nome, a mesada e a
porcentagem de aumento dessa mesada. Calcule a noma mesada
com aumento. Exiba o nom, a mesada antiga, quanto de aumento
houve em dinheiro e a mesada nova
 */
programa
{
	cadeia nome
	real porcentagem, mesada, aumento, mesada2
	funcao inicio()
	{
		escreva("Este programa calcula um aumento em porcentagem sobre sua mesada.\nDigite seu nome: ")
		leia(nome)
		escreva("Digite o valor atual da sua mesada: ")
		leia(mesada)
		escreva("Digite o valor da sua porcentagem (número inteiro): ")
		leia(porcentagem)
		aumento = mesada * porcentagem / 100
		mesada2 = mesada + aumento
		escreva("",nome,", sua mesada inicial era de: ",mesada,". com o aumento de ",porcentagem,"% (",aumento,") passou a ser: ",mesada2)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 773; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */