/*1)	Dado um número inteiro indicado uma operação em um caixa eletrônico, 
informe a opção correspondente: 1- saldo, 2- extrato, 3- saque, 4-sair.*/

#include<stdio.h>

main()
{
	int entrada;
	printf("Digite o número da operação (1- saldo, 2- extrato, 3- saque, 4-sair): ");
	scanf("%i",&entrada);
	if (entrada == 1)
		printf("saldo");
	else
		if (entrada == 2)
			printf("extrato");
		else
			if (entrada == 3)
				printf("saque");
			else
				if (entrada == 4)
					printf("sair");
				else
					printf("Digite uma operação válida");
}
