/*Leia o nome e o sal�rio de um funcion�rio. Caso o sal�rio seja maior que ou 
igual a R$:1500 exiba: "Voc� ganha mais que um sal�rio m�nimo", 
caso contr�rio exiba: "Voc� precisa de um almento"*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[30] ;
	float salario ;
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite o sal�rio: ");
	scanf("%f",&salario);
	if (salario >= 1500)
		printf("%s ganha mais que um sal�rio m�nimo",nome);
	else
		printf("%s, voc� precisa de um aumento",nome);
}
