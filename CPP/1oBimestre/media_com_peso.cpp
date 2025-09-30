//Programa que calcula a média com peso. nota 1 tem peso 2, nota 2 tem peso 3 e nota 3 tem peso 5
//Dica: multiplique cada nota pelo peso correspondente some com as demias notas e divida or 10
#include<stdio.h>
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	float n1 , n2 , n3 , med ;
	char nome[20] ;
	printf("este programa calcula a média com peso dos alunos \n");
	printf("digite o nome do/a aluno/a: ");
	scanf("%s", &nome);
	printf("digite a primeira nota do/a %s: ", &nome);
	scanf("%f", &n1);
	printf("digite a segunda nota do/a %s: ", &nome);
	scanf("%f", &n2);
	printf("digite a terceita nota do/a %s: ", &nome);
	scanf("%f", &n3);
	med = ((n1*2)+(n2*3)+(n3*5))/10;
	printf("a média com peso do/a aluno/a %s foi %.2f", nome, med);
}
