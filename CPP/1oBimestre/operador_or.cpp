/* Programa que l� um valor num�rico inteiro referente aos c�digos 1, 2 e 3.
Qualqeur outro valor deve apresentar a mesnsagem "c�digo inv�lido". Se o valor
estiver correto, apresentar o valor do c�digo escrito por extenso. */
//operador or (||)

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int codigo;
	printf("Entre com um c�digo de acesso: ");
	scanf("%i",&codigo);
	if (codigo == 1 || codigo == 2 || codigo == 3)
	{
		if (codigo == 1)
			printf("UM\n");
		if (codigo == 2)
			printf("DOIS\n");
		if (codigo == 3)
			printf("TR�S\n");
	}
	else
		printf("c�digo inv�lido");
}
