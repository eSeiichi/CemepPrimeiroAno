/*Programa ORDENA.
	Ler 2 valores inteitos e apresentá-los
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
	if(A>B);//caso A<B, ele só vai ignorar a condição dentro das chaves.
		{
			Y = A; //Y é uma variável auxiliar 
			A = B;
			B = Y;
		}
		printf("\nOs valores ordenados são %i e %i", A, B);
	}	
