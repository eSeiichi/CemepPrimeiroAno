/* Programa que lê um valor numérico inteiro referente aos códigos 1, 2 e 3.
Qualqeur outro valor deve apresentar a mesnsagem "código inválido". Se o valor
estiver correto, apresentar o valor do código escrito por extenso. */
//operador or (||)

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int codigo;
	printf("Entre com um código de acesso: ");
	scanf("%i",&codigo);
	if (codigo == 1 || codigo == 2 || codigo == 3)
	{
		if (codigo == 1)
			printf("UM\n");
		if (codigo == 2)
			printf("DOIS\n");
		if (codigo == 3)
			printf("TRÊS\n");
	}
	else
		printf("código inválido");
}
