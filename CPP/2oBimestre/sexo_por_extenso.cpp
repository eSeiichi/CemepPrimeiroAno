/* Dada uma letra maiúscula, representando o sexo de uma pessoa, informe o
sexo correspondente por extenso */

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	char sexo;
	printf("Digite sexo [F ou M]: ");
	scanf("%c",&sexo);
	if (sexo == 'M' || sexo == 'm')
		printf("Masculino \n");
	else
		if (sexo == 'F' || sexo == 'f')
			printf("Feminino \n");
		else
			printf("Inválido \n");		
}
