/*Programa média escalar (Ler 4 valores, caso média maior ou igual
a 6 exiba APROVADO, caso contrário REPROVADO*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	printf("DIgite nota 1: ");
	scanf("%f",&n1);
	printf("Digite nota 2: ");
	scanf("%f",&n2);
	printf("Digite nota 3: ");
	scanf("%f",&n3);
	printf("Digite nota 4: ");
	scanf("%f",&n4);
	media = (n1+n2+n3+n4)/4;
	if (media >=6)
		printf("APROVADO com média %.2f", media);
	else
		printf("REPROVADO com média %.2f", media);
}
