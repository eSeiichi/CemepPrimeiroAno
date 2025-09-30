/*Calcule a área total de uma residência (sala, cozinha, banheiro, quartos,
área de serviço, quintal, garagem, etc.). O programa deverá solicitar a
entrada do nome, a largura e o comprimento de um determinado
cômodo. Em seguida, deverá apresentar à área do cômodo lido e
também uma mensagem solicitando do usuário a confirmação de
continuar calculando novos cômodos. Caso o usuário não queira mais
calcular, o programa deverá apresentar o valor total acumulado da área
residencial.*/

programa
{
	
	funcao inicio()
	{
		cadeia nome,loop = "1"
		real total=0, comodo,largura,comprimento
		escreva("Este programa calcula a área de uma residência.\n")
		enquanto (loop=="1"){
			escreva("Digite o nome do cômodo: ")
			leia(nome)
			escreva("Digite o valor da largura do cômodo (em metros): ")
			leia(largura)
			escreva("Digite o valor do comprimento do cômodo (em metros): ")
			leia(comprimento)
			comodo = largura * comprimento
			total+=comodo
			escreva("O comodo ",nome," possui: ",comodo," m²\n")
			escreva("Deseja continuar contar as áreas? caso deseje, digite 1: ")
			leia(loop)
		}
		escreva("\nA área total da casa é de ",total," m²")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1098; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */