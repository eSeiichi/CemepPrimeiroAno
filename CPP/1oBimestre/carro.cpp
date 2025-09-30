/*Informe a marca, o modelo e o valor de um carro.
aplique um desconto (em reais) e exiba:
"O carro... modelo... com desconto passa a ser..."
salvar como carro.cpp*/

#include<stdio.h>
#include<locale.h>
#include<math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int entrada ;
	float saida , desconto ;
	char marca[30] , modelo[30] ;
	printf("Digite a marca do seu carro: ");
	scanf("%s",& marca);
	printf("DIgite o modelo do carro: ");
	scanf("%s",& modelo);
	printf("DIgite o preço do carro: ");
	scanf("%i",& entrada);
	desconto = (entrada * 1/20);
	saida = entrada - desconto ;
	printf("O carro de modelo %s e marca %s obteve um desconto de ", modelo , marca);
	printf("R$:%.2f, ficando com preço total de R$:%.2f", desconto , saida);
}
