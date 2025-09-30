/*Leia o sexo de uma pessoa. Caso o sexo seja igual a "F" exiba "feminino", 
caso o sexo seja igual a "M" exiba "Masculino", 
caso o sexo seja diferente de "F" e "M" exiba inválido.*/

#include<stdio.h>
#include<locale.h>

main()
{
	char s;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite seu sexo (m ou f): ");
	scanf("%c",&s);
	if (s == 'm' || s == 'M')
		printf("Masculino");
	else if (s == 'f'|| s == 'F')
		printf("Feminino");
	else
		printf("Inválido");
}
