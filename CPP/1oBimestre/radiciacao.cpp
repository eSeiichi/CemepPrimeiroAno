//programa raiz
#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int radicando, raiz;
	printf("Digite o radicando: ");
	scanf("%i",&radicando);
	raiz = sqrt(radicando);
	printf("a raiz é %i",raiz);

