/*1)	Dado um n�mero inteiro indicado uma opera��o em um caixa eletr�nico, 
informe a op��o correspondente: 1- saldo, 2- extrato, 3- saque, 4-sair.*/

#include<stdio.h>

main()
{
	int entrada;
	printf("Digite o n�mero da opera��o (1- saldo, 2- extrato, 3- saque, 4-sair): ");
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
					printf("Digite uma opera��o v�lida");
}
