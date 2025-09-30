//programa que exibe nome e idade de um aluno

#include <stdio.h>
#include <locale.h>

main()
	{
		setlocale(LC_ALL, "Portuguese");
		char nome[20];
		int idade;
		printf("Digite o nome do/a aluno/a: ");
		scanf("%s",&nome);
		printf ("Digite a idade do/a aluno/a: ");
		scanf("%i",&idade);
		printf("O aluno/a chama-se %s",nome);
		printf(" e possui %i",idade);
	}
