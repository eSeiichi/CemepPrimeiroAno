//Programa que exibe o nome do funcionário e seu salário

#include <stdio.h>
#include <locale.h>

main()
	{
		setlocale(LC_ALL, "Portuguese");
		char nome[20];
		float salario;
		printf("Digite o nome do/a funcionário/a: ");
		scanf("%s",&nome);
		printf("Digite a idade do/a aluno/a: ");
		scanf("%f",&salario);
		printf("O funcionário/a chama-se %s e ganha %.2f",nome,salario); //o jeito de colocar duas variáveis em uma string só
	}
