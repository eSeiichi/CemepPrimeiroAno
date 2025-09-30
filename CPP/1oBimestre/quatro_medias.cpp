//programa que lê 4 notas de um alunoo, o nome, calcula e exibe a média.
#include <math.h>
#include <locale.h>
#include <stdio.h>
main()
{	setlocale(LC_ALL, "Portuguese");
	float n1 , n2 , n3 , n4 , med ;
	char nome[40];
	
	printf("digite o nome do/a aluno/a: ");
	scanf("%s", &nome);
	printf("digite a primeira nota do/a %s: ", &nome);
	scanf("%f", &n1);
	printf("digite a segunda nota do/a &s: ", &nome);
	scanf("%f", &n2);
	printf("digite a terceira nota do/a &s: ", &nome);
	scanf("%f", &n3);
	printf("digite a quarta nota do/a %s: ", &nome);
	scanf("%f", &n4);
	med = (n1+n2+n3+n4)/4;
	printf("a média do/a aluno/a %s, foi %.2f", nome, med);        
}
