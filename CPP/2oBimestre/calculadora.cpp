 /* Dados dois números reais e um caractere (+, -, *, /) representeando 
uma operação a ser efetuado com eles, calcule e informe o resultado da operação */

#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	int n1 , n2;
	float resultado;
	char operacao;
	setlocale(LC_ALL, "Portuguese");
	printf("Este programa é uma calculadora simples\nDigite a opreção(+,-,* ou /): ");
	scanf("%c",&operacao);
	printf("Digite um número: ");
	scanf("%i",&n1);
	printf("DIgite o segundo número: ");
	scanf("%i",&n2);
	if (operacao == '+')
		{
			resultado = n1+n2;
			printf("resultado da soma = %.2f",resultado);
		}
	else
		if (operacao == '-')
			{
				resultado = n1-n2;
				printf("resultado da subtração = %.2f",resultado);
			}
		else
			if (operacao == '*')
				{			
					resultado = n1*n2;
					printf("resultado da multiplicação = %.2f",resultado);
				}
			else
				if (operacao == '/')
					if (n2 != 0)
						{
							resultado = n1/n2;
							printf("resultado da divisão = %.2f",resultado);
						}
					else
						printf("não é possivel dividir por zero");
				else
					printf("digite uma operação válida");
}

