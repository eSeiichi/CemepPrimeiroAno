programa
{
	
	funcao inicio()
	{
		inteiro i,j, nota, media, sala=0
		para(i=1;i<=3;i++){
			media=0
			para(j=1;j<5;j++){
				escreva("Dite a nota ",j," do aluno ",i,": ")
				leia(nota)
				media+=nota
			}
			media/=4
			escreva("Média do aluno ",i,": ",media,"\n")
			sala+=media
		}
		escreva("Média da sala: ",sala/3)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 288; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */