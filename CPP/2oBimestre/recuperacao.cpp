/* Em uma universidade a aprova��o requer no m�ximo 40 faltas e no m�nimo m�dia 6.0.
Se aluno estourar em faltas, ele � reprovado diretamente, caso contr�rio, se ele n�o
alcan�ar a m�dia m�mima, ele fica para recupera��o. Dada a m�dia de um aluno, bem como
seu n�mero de faltas, informe a sua situa��o */
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float media;
	int faltas;
	printf("Digite m�dia: ");
	scanf("%f",&media);
	printf("DIgite faltas: ");
	scanf("%i",&faltas);
	if (faltas <= 40)
		if(media >= 6.0)
			printf("Aprovado\n");
		else
			printf("Recupera��o\n");
	else
		printf("Reprovado\n");
}
