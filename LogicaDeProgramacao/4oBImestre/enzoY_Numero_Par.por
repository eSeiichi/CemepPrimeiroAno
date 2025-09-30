programa
{
	
	funcao inicio()
	{
		inteiro num[6]

		escreva ("---------------------------------------------\n")
		escreva ("Programa Vetor Números Pares \n")
		escreva ("---------------------------------------------\n")
		
		para (inteiro i =0; i<6; i++){
			escreva("Digite um número para a posicão " ,i,": ")
			leia(num[i])
		}
		para (inteiro i=0;i<6;i++){
			se (num[i] % 2 == 0){
				escreva(num[i],"\n")
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
 * @POSICAO-CURSOR = 581; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */