/* Dada uma letra (S, C, D, ou V), informe o estado civil correspondente por
extenso (Colteiro, Casaoo, Divorciado ou Viúvo) */;
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	char estado;
	printf("Digite seu estado civil [S, C, D ou V]: ");
	scanf("%c",&estado);
	if (estado == 'C' || estado == 'c')
		printf("Casado");
		else
			if (estado == 'S' || estado == 's')
				printf("Solteiro");
			else
				if (estado == 'D' || estado == 'd')
					printf("Divorciado");
				else
					if (estado == 'V' || estado == 'v')
						printf("Viúvo");
					else
						printf("inválido");
}
