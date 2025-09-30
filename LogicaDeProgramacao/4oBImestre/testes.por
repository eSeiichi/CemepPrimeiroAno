programa
{
	funcao real somar(real a, real b){	
		real somas
		soma=a+b
		retorne( soma)
	}
	funcao real subtrair(real a, real b){
		real sub
		sub=a-b
		retorne(sub)
	}
	funcao real multiplicacao(real a, real b){
		real mul
		mul=a*b
		retorne(mul)
	}
	funcao real divisao(real a, real b){
		real div
		div=a/b
		retorne(div)
	}
	
	funcao inicio()
	{
		inteiro op, loop=1
		real res, a, b
		
		enquanto (loop ==1){
			escreva("Digite a operação a ser realizada (soma=1, subtração=2, multiplicação=3, divisão=4): ")
			leia(op)
			escreva("Informe um valor para \"a\" e \"b\": ")
			leia(a)
			escreva("Informe um valor para \"a\" e \"b\": ")
			leia(b)
			escolha (op){
				caso 1: 
					res= somar(a,b)
				caso 2:
					res = subtrair(a,b)
				caso 3:
					res = multiplicacao(a,b)
				caso 4:
					res = divisao(a,b)
			escreva("O resultado foi: ",res,"\n")
			escreva("Caso deseje continuar, digite 1: ")
			leia(op)
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 709; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */