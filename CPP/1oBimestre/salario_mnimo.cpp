/*Leia o nome e o salário de um funcionário. Caso o salário seja maior que ou 
igual a R$:1500 exiba: "Você ganha mais que um salário mínimo", 
caso contrário exiba: "Você precisa de um almento"*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[30] ;
	float salario ;
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	printf("Digite o salário: ");
	scanf("%f",&salario);
	if (salario >= 1500)
		printf("%s ganha mais que um salário mínimo",nome);
	else
		printf("%s, você precisa de um aumento",nome);
}
