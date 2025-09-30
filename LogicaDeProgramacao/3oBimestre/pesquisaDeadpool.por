programa
{
	
	funcao inicio()
	{
		inteiro count=0,otimo=0,bom=0,regular=0,ruim=0,op
		caracter resp='s'
		
		escreva("Pesquisa Deadpool and Wolverine\n")
		enquanto (resp == 'S' ou resp == 's'){
			escreva("**************************************************\n")
			escreva("Digite \"1\" para ótimo\nDigite \"2\" para bom\nDigite \"3\" para regular\nDigite \"4\" para ruim\nDigite sua avaliação: ")
			leia(op)
			se (op==1){
				otimo+=1
			}
			senao se (op==2){
				bom+=1
			}
			senao se (op==3){
				regular+=1
			}
			senao se (op==4){
				ruim+=1
			}
			senao{
				escreva("Resposta inválida")
			}
			escreva("Deseja continuar sua pesquisa? Digite s para sim: ")
			leia(resp)
			count+=1
		}
		escreva("**************************************************\n")
		escreva("Total de opiniões: ",count,"\nNúmero de ótimos: ",otimo,"\nNúmero de bons: ",bom,"\nNúmero de regular: ",regular,"\nNúmero de ruim: ",ruim)
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