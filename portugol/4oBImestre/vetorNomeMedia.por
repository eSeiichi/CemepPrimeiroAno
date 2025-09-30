programa
{
	
	funcao inicio()
	{
		real media[4], nota1[4], nota2[4]
		cadeia nome[4]
		  
		para (inteiro i =0; i<4;i++){
			escreva("Nome: ")
			leia(nome[i])
			escreva (" digite a primeira nota do aluno, ", nome[i])
			leia(nota1[i])
			escreva("digite a segunda nota do aluno, ", nome[i])
			leia(nota2[i])
		}
		para(inteiro i=0;i<4;i++){
			
			media[i] = (nota1[i]+nota2[i])/2
			se (nome[i] == "ana"){
				escreva(nome[i], "\t\t", media[i])
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 90; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */