#include<stdio.h>
#include <locale.h>
main() {
	int loop=1;
	float reais;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	while(loop==1){
		printf("\nDigite o nome do funcion�rio: ");
		scanf("%s",&nome);
		printf("\nDigite quanto ele ganha: ");
		scanf("%f",&reais);
		printf("\nO funcion�rio %s ganha %2.f reais.",nome,reais);
		printf("se quiser continuar o programa digite\"1\", se n�o digite \"0\"");
		scanf("%i",loop);
	} 
	return 0;
}
