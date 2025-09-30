//Dado um número, informe se ele é positivo, negativo ou nulo

#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite número: ");
	scanf("%i",&numero);
	if (numero > 0)
		printf("Positivo\n");
	else
		if (numero < 0 )
			printf("Negativo \n");
		else 
			printf("Nulo \n");
}
