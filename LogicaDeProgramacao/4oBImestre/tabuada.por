programa{
	
	funcao inicio(){
		//declaração da variáveis
		caracter loop='s'
		inteiro n,r,i,l
		escreva("***TABUADA***\n")
		enquanto (loop == 's'){
			escreva("Digite um valor para ver a tabuada dele: ")
			leia(n)
			escreva("Digite o limite da tabuada: ")
			leia(l)
			para(i=1;i<=l;i++){
				r=i*n
				escreva(n, " X ", i, " = ", r, "\n")
			}
			escreva("Caso deseje continuar, digite 's': ")
			leia(loop)
			
		}
		escreva("Programa encerrado")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 344; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */