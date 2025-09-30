/* Dado um n�mero inteiro represendo a plada de um ve�culo, informe em que
dia da semana esse ve�culo est� no rod�zio. Embora o usu�rio digite um n�mero
de placa composto por quatro d�gitos, para determinar o dia do rod�zio
correspondente, o algoritmo precisa verificar apenas o d�gito final desse n�mero.
Para isso, basta dividir o n�mero da placa por 10 e tomar o resto da divis�o,
pois sempre que dividimos um n�mero por 10, o resto da divis�o � igual ao
�ltimo digito do n�mero */

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int placa;
	float divisao;
	printf("Digite o n�mero da placa: ");
	scanf("%i",&placa);
	divisao = placa % 10;
	if (divisao == 1 || divisao == 2)
		printf("Segunda \n");
		else
			if (divisao == 3 || divisao == 4)
				printf("Ter�a \n");
			else
				if (divisao == 5 || divisao == 6)
					printf("Quarta \n");
				else
					if (divisao == 7 || divisao == 8)
						printf("Quinta \n");
					else
						printf("Sexta");
}
