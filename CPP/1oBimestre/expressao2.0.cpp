/*Calcule e exiba o valor da expressão:
x = raiz((a² + b²)/2)
salvar como expressao.cpp
"O valor da expressão é ..."*/

#include<locale.h>
#include<stdio.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int a , b ;
	float x ;
	printf("Este programa realiza a seguinte expressão:\nraiz de ((a² + b²)/2)\nDigite o valor de a: ");
	scanf("%i",&a);
	printf("Digite o valor de b: ");
	scanf("%i",&b);
	x = sqrt((pow(a , 2) + pow(b ,2))/2);
	printf("O valor da expressão é %.2f", x);
}   
