programa
{
	
	funcao inicio()
	{
		inteiro velocidade
		real litros , tempo, distancia
		escreva("este programa calcula a quantidade de litros gastos em uma viagem (considerando 12km por litro)\n")
		escreva("digite o tempo gasto em viagem (em horas): ")
		leia(tempo)
		escreva("digite a velocidade média do percurso: ")
		leia(velocidade)
		distancia = tempo * velocidade
		litros = distancia / 12
		escreva("seu carro percorreu ", distancia , " km, durante " , tempo , " horas, á " , velocidade , " km/h e consumiu " , litros , " litros de combustível")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 489; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */