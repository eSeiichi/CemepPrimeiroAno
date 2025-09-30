/* Faça um programa que recebe o NOME e a MESADA de uma pessoa.
Calcule a nova mesada com 10% de aumento. Exiba o nome, a mesada
antiga, quanto de aumento hobe em dinheiro e a mesada nova.*/
programa
{
	cadeia nome
	real mesada, aumento, reajuste
	funcao inicio()
	{
		escreva("Este programa calcula um aumento de 10% sobre sua mesada.\nDigite seu nome: ")
		leia(nome)
		escreva("Digite o valor atual de sua mesada: ")
		leia(mesada)
		aumento = mesada * 0.1
		reajuste = aumento + mesada
		escreva("",nome,", sua mesada inicial era de: ",mesada,". com o aumento de 10% (",aumento,") passou a ser: ",reajuste)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 556; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 */