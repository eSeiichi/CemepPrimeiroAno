#include<stdio.h>
#include<locale.h>
main()
{
	int selecao;
	setlocale(LC_ALL, "Portuguese");
	printf("Salgados\n\n1-Croassant de presunto e queijo\n2-salsicha empanada\n3-p�o de queijo\n4-esfiha aberta\n5-presunto e queijo frito\n6-bauro\n\nEscolha um n�mero: ");
	scanf("%i",&selecao);
	
	if (selecao == 1)
		printf("Croissant de presunto e queijo\n\nUm de massa folhada de origem francesa, recheada com presunto e queijo.\n");
	else 
		if(selecao == 2)
			printf("Salsicha empanada\n\nUma salsicha empanada em farinha e frita.");
		else
			if (selecao == 3)
			printf("P�o de queijo\n\nApesar de ser denominado como \"p�o\", o p�o de queijo consiste basicamente \nem um tipo de biscoito de polvilho azedo ou doce acrescido de ovos, sal, \n�leo vegetal e queijo, de consist�ncia macia e el�stica, existindo pequenas varia��es.");
			else 
				if (selecao == 4)
					printf("Esfiha aberta\n\nA esfiha � uma comida t�pica do Oriente M�dio, presente em diversos pa�ses da regi�o, e a vers�o aberta � uma varia��o onde a massa � aberta e recheada com carne temperada, podendo conter tamb�m outros ingredientes como queijo, verduras, etc.\n");
				else
					if (selecao == 5)
					printf("Presunto e queijo frito\n\nPedacinhos de presunto e queijo fritos em �leo quente, uma del�cia crocante e saborosa.\n");
					else
						if (selecao == 6)
						    printf("Bauro\n\nUma massa de p�o recheada com carne, queijo e outros ingredientes, assada at� ficar dourada e crocante. Uma excelente op��o para matar a fome!\n");
						else
							printf("Digite uma op��o v�lida");			
}		

