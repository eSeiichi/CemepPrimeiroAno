/*Fa�a a leitura de 2 valores
	num�ricos e efetue a adi��o.Caso 
	o valor somado seja maior ou igual
	a 10, deve ser apresentado somado
	a ele mais 5. Caso o valor somado
	n�o seja maior ou igual a 10, deve
	ser apresentado subrraido dele 7*/
#include <stdio.h>
main()
{
	int A , B , Y ;
	printf("informe A: ");
	scanf("%i",&A);
	printf("Informe B: ");
	scanf("%i",&B);
	Y = A + B;
	printf("\nO resultado equivale a: ");
	if(Y >= 10)
		printf("%i", Y + 5);
	else
		printf("%i", Y - 7);		
}
