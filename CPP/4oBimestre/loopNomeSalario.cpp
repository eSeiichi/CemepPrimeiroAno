#include<stdio.h>
#include <locale.h>
main() {
	int loop=0;
	float reais;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	while(loop<3){
		printf("\nDigite o nome do funcion�rio: ");
		scanf("%s",&nome);
		printf("\nDigite quanto ele ganha: ");
		scanf("%f",&reais);
		printf("\nO funcion�rio %s ganha %2.f reais.",nome,reais);
		loop++;
	} 
	return 0;
}
