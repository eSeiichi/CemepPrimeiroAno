/* DIvisibilidade = � a qualidade do que � divisivel. Quando o resto de uma 
divis�o de n�meros naturais � igual a zero, tem-se divisibilidade, ou seja,
resultado de divis�o exata. Valores do tipo float n�o entram nesta abordagem,
apenas as do tipo int */
//caso seja divis�vel exiba o valor do n�mero

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int N, R4, R5;
	printf("\n Digite um valor inteiro natural: ");
	scanf("%i",&N);
	R4 = N % 4;
	R5 = N % 5;
	if (R4 == 0 && R5 == 0)
		printf("%i \n",N);
	else
		printf("Valor n�o � divis�vel por 4 e 5 \n");
}
