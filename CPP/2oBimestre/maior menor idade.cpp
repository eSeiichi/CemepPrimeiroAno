/* Leia uma idade e exiba
	se a pessoa é MAIOR DE IDADE
	ou MENOR DE IDADE */
	
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int i ;
	printf("digite a sua idade: ");
	scanf("%i",&i);
	if(i >+ 18)
		printf("Você é maior de idade");
	else
		printf("Você é menor de idade");
}
