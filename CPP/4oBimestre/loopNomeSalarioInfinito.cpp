#include<stdio.h>
#include <locale.h>
main() {
	int loop=1;
	float reais;
	char nome[20];
	setlocale(LC_ALL, "Portuguese");
	while(loop==1){
		printf("\nDigite o nome do funcionário: ");
		scanf("%s",&nome);
		printf("\nDigite quanto ele ganha: ");
		scanf("%f",&reais);
		printf("\nO funcionário %s ganha %2.f reais.",nome,reais);
		printf("se quiser continuar o programa digite\"1\", se não digite \"0\"");
		scanf("%i",loop);
	} 
	return 0;
}
