/* Dado um número inteiro represendo a plada de um veículo, informe em que
dia da semana esse veículo está no rodízio. Embora o usuário digite um número
de placa composto por quatro dígitos, para determinar o dia do rodízio
correspondente, o algoritmo precisa verificar apenas o dígito final desse número.
Para isso, basta dividir o número da placa por 10 e tomar o resto da divisão,
pois sempre que dividimos um número por 10, o resto da divisão é igual ao
último digito do número */

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int placa;
	float divisao;
	printf("Digite o número da placa: ");
	scanf("%i",&placa);
	divisao = placa % 10;
	if (divisao == 1 || divisao == 2)
		printf("Segunda \n");
		else
			if (divisao == 3 || divisao == 4)
				printf("Terça \n");
			else
				if (divisao == 5 || divisao == 6)
					printf("Quarta \n");
				else
					if (divisao == 7 || divisao == 8)
						printf("Quinta \n");
					else
						printf("Sexta");
}
