/* DIvisibilidade = é a qualidade do que é divisivel. Quando o resto de uma 
divisão de números naturais é igual a zero, tem-se divisibilidade, ou seja,
resultado de divisão exata. Valores do tipo float não entram nesta abordagem,
apenas as do tipo int */
//caso seja divisível exiba o valor do número

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
		printf("Valor não é divisível por 4 e 5 \n");
}
