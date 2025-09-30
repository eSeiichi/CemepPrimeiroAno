/* Calcule e exiba o valor da express�o:
a� + b� */

#include <math.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float a , b , resultado ;
	printf("este programa faz faz a soma de dois n�meros \n");
	printf("digite o primeiro n�mero: ");
	scanf("%f", &a);
	printf("digite o segundo n�mero: ");
	scanf("%f", &b);
	resultado = pow(a , 2) + pow(b , 2);
	printf("o resultado foi: %.3f", resultado);
}
