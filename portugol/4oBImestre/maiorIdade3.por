programa
{
	
	funcao inicio()
	{
		inteiro idade, soma=0,i
		para(i=1;i<=3;i++){
			escreva("Digite uma idade: ")
			leia(idade)
			se (idade >= 18){
				soma++
			}
		}
		escreva("Há ",soma" pessoas maiores de idade")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 223; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */