 /* Dados dois n�meros reais e um caractere (+, -, *, /) representeando 
uma opera��o a ser efetuado com eles, calcule e informe o resultado da opera��o */

#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	int n1 , n2;
	float resultado;
	char operacao;
	setlocale(LC_ALL, "Portuguese");
	printf("Este programa � uma calculadora simples\nDigite a opre��o(+,-,* ou /): ");
	scanf("%c",&operacao);
	printf("Digite um n�mero: ");
	scanf("%i",&n1);
	printf("DIgite o segundo n�mero: ");
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
				printf("resultado da subtra��o = %.2f",resultado);
			}
		else
			if (operacao == '*')
				{			
					resultado = n1*n2;
					printf("resultado da multiplica��o = %.2f",resultado);
				}
			else
				if (operacao == '/')
					if (n2 != 0)
						{
							resultado = n1/n2;
							printf("resultado da divis�o = %.2f",resultado);
						}
					else
						printf("n�o � possivel dividir por zero");
				else
					printf("digite uma opera��o v�lida");
}

