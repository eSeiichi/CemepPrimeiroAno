/* Programa que aceita valores num�ricos inteiros (entre 0 e 9).
Se o valor estiver dentro da faixa, o programa deve apresentar a
mensagem "valor v�lido". Caso o valor esteja fora da faixa, o
programa deve apresentar a mensagem "valor inv�lido" */
// Operador and (e) - &&

#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um n�mero entre 0 e 9: ");
	scanf("%i",&numero);
	if (numero>=0 && numero<=9)
		printf("Valor v�lido");
	else
		printf("valor inv�lido");
}
