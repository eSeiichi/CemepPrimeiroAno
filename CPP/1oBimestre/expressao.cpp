/*Calcule e exiba o valor da expressão:
			x = ((a+b)² + (b+c)²)/2  expressao.cpp
			programa por: enzo e gabriel*/
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int A, B, C ;
	float x ;
	printf("Este programa calcula a expressão: x = ((a+b)² + (b+c)²)/2 \n");
	printf("Digite o valor de A: ");
	scanf("%i",&A);
	printf("Digite o valor de B: ");
	scanf("%i",&B);
	printf("Digite o valor de C: ");
	scanf("%i",&C);
	x = (pow((A+B),2) + pow((B+C),2))/2;
	printf("O valor da expressão é %2.f",x);
}

