//Programa que exibe o nome do funcion�rio e seu sal�rio

#include <stdio.h>
#include <locale.h>

main()
	{
		setlocale(LC_ALL, "Portuguese");
		char nome[20];
		float salario;
		printf("Digite o nome do/a funcion�rio/a: ");
		scanf("%s",&nome);
		printf("Digite a idade do/a aluno/a: ");
		scanf("%f",&salario);
		printf("O funcion�rio/a chama-se %s e ganha %.2f",nome,salario); //o jeito de colocar duas vari�veis em uma string s�
	}
