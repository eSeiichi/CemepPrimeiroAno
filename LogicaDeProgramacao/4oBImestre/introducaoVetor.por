programa
{

	funcao inicio()
	{
		real nota[10]
		inteiro i, cont=1, num10=0
		cadeia nomes[10]
		
		escreva("Olá vetor\n")
		//preparação só para a leitura do vetor
		para (i=0;i<10;i++){
			escreva("Digite o nome do aluno: ")
			leia(nomes[i])
			escreva("informe a nota de ",nomes[i],"ª nota: ")
			leia(nota[i])
			cont++
			limpa()
		}
		para(i=0;i<10;i++){
			se(nota[i]==10){
				escreva(nomes[i]," tirou 10\n")
				num10++
			}
		}
		//preparação para exibição
		para(i=0;i<10;i++){
			escreva(nomes[i], " de posição/index[",i,"] tirou nota ",nota[i],"\n")
			escreva(num10," alunos tiraram nota 10")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 13; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */