/*Programa ORDENA.
	Ler 2 valores inteitos e apresent�-los
	na ordem crescente*/
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int A , B , Y ;
	printf("Informe A: ");
	scanf("%i",&A);
	printf("Informe B: ");
	scanf("%i",&B);
	if(A>B);//caso A<B, ele s� vai ignorar a condi��o dentro das chaves.
		{
			Y = A; //Y � uma vari�vel auxiliar 
			A = B;
			B = Y;
		}
		printf("\nOs valores ordenados s�o %i e %i", A, B);
	}	
