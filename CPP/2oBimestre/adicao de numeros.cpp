/* Programa adi��o de n�meros
	Ler 2 valores num�ricos, efetuar a adi��o e apresentar o seu
	resultado caso o valor somado seja maior que 10 */
	#include <stdio.h>
	#include <locale.h>
	main()
	{
		setlocale(LC_ALL, "Portuguese");
		int A , B , Y ;
		printf("Informe um valor para a vari�vel A: ");
		scanf("%i",&A);
		printf("Informe um vlaor para a vari�vel B: ");
		scanf("%i",&B);
		Y = A + B ;
		if(Y>10)

			printf("\nO valor da vari�vel Y equivale a: %i",Y);
		else if(Y==10)
			printf("\nY � igual a 10");
		else
			printf("\nY � menor que 10");
	}
