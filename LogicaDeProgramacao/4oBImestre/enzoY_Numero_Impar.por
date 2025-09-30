programa
{
	
	funcao inicio()
	{
		inteiro num[6] ,i=0
		
		
		escreva ("---------------------------------------------\n")
		escreva ("Programa Vetor Números Ímpares \n")
		escreva ("---------------------------------------------\n")

		para (i =0; i<6; i++){
			escreva("Digite um número para a posicão " ,i,": ")
			leia(num[i])
		}
		
		para (i=0;i<6;i++){
			se (num[i] % 2 != 0){
				escreva(num[i], " na posição ", i,"\n")
			}
		}
			
		escreva ("---------------------------------------\n")
		escreva ("Desenvolvido por: Enzo Y\n")
		escreva ("---------------------------------------\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 168; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */