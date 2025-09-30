/* Em uma universidade a aprovação requer no máximo 40 faltas e no mínimo média 6.0.
Se aluno estourar em faltas, ele é reprovado diretamente, caso contrário, se ele não
alcançar a média mímima, ele fica para recuperação. Dada a média de um aluno, bem como
seu número de faltas, informe a sua situação */
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float media;
	int faltas;
	printf("Digite média: ");
	scanf("%f",&media);
	printf("DIgite faltas: ");
	scanf("%i",&faltas);
	if (faltas <= 40)
		if(media >= 6.0)
			printf("Aprovado\n");
		else
			printf("Recuperação\n");
	else
		printf("Reprovado\n");
}
