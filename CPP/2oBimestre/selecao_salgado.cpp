#include<stdio.h>
#include<locale.h>
main()
{
	int selecao;
	setlocale(LC_ALL, "Portuguese");
	printf("Salgados\n\n1-Croassant de presunto e queijo\n2-salsicha empanada\n3-pão de queijo\n4-esfiha aberta\n5-presunto e queijo frito\n6-bauro\n\nEscolha um número: ");
	scanf("%i",&selecao);
	
	if (selecao == 1)
		printf("Croissant de presunto e queijo\n\nUm de massa folhada de origem francesa, recheada com presunto e queijo.\n");
	else 
		if(selecao == 2)
			printf("Salsicha empanada\n\nUma salsicha empanada em farinha e frita.");
		else
			if (selecao == 3)
			printf("Pão de queijo\n\nApesar de ser denominado como \"pão\", o pão de queijo consiste basicamente \nem um tipo de biscoito de polvilho azedo ou doce acrescido de ovos, sal, \nóleo vegetal e queijo, de consistência macia e elástica, existindo pequenas variações.");
			else 
				if (selecao == 4)
					printf("Esfiha aberta\n\nA esfiha é uma comida típica do Oriente Médio, presente em diversos países da região, e a versão aberta é uma variação onde a massa é aberta e recheada com carne temperada, podendo conter também outros ingredientes como queijo, verduras, etc.\n");
				else
					if (selecao == 5)
					printf("Presunto e queijo frito\n\nPedacinhos de presunto e queijo fritos em óleo quente, uma delícia crocante e saborosa.\n");
					else
						if (selecao == 6)
						    printf("Bauro\n\nUma massa de pão recheada com carne, queijo e outros ingredientes, assada até ficar dourada e crocante. Uma excelente opção para matar a fome!\n");
						else
							printf("Digite uma opção válida");			
}		

