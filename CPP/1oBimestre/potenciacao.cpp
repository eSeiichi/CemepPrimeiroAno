//Programa potenciação

#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int base, expoente, potencia;
	printf("Digite a base: ")	;
	scanf("%i",&base);
	printf("Digite o expoente: ");
	scanf("%i",&expoente);
	potencia = pow(base,expoente);
	printf("O resultado da potência é: %i",potencia);
}
