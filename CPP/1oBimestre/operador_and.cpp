/* Programa que aceita valores numéricos inteiros (entre 0 e 9).
Se o valor estiver dentro da faixa, o programa deve apresentar a
mensagem "valor válido". Caso o valor esteja fora da faixa, o
programa deve apresentar a mensagem "valor inválido" */
// Operador and (e) - &&

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um número entre 0 e 9: ");
	scanf("%i",&numero);
	if (numero>=0 && numero<=9)
		printf("Valor válido");
	else
		printf("valor inválido");
}
