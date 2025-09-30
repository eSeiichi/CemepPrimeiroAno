#include<stdio.h>
#include <locale.h>
main() {
	int loop=0;
	float reais;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	while(loop<3){
		printf("\nDigite o nome do funcionário: ");
		scanf("%s",&nome);
		printf("\nDigite quanto ele ganha: ");
		scanf("%f",&reais);
		printf("\nO funcionário %s ganha %2.f reais.",nome,reais);
		loop++;
	} 
	return 0;
}
