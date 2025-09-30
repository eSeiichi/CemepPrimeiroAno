/* Programa adição de números
	Ler 2 valores numéricos, efetuar a adição e apresentar o seu
	resultado caso o valor somado seja maior que 10 */
	#include <stdio.h>
	#include <locale.h>
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int A , B , Y ;
		printf("Informe um valor para a variável A: ");
		scanf("%i",&A);
		printf("Informe um vlaor para a variável B: ");
		scanf("%i",&B);
		Y = A + B ;
		if(Y>10)

			printf("\nO valor da variável Y equivale a: %i",Y);
		else if(Y==10)
			printf("\nY é igual a 10");
		else
			printf("\nY é menor que 10");
	}
