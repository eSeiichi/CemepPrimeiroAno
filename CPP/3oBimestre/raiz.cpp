#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int num, continuar=1;
	float resp;
	do{
		printf("Digite um número para descobrir sua raiz: ");
		scanf("%i",&num);
		if (num<0)
			printf("Este número é negativo");
		else {
			resp= sqrt(num);
			printf("A raiz do número %i coresponde a: %.2f\n",num,resp);
		}
		printf("Se desejar continuar, digite \'1\': ");
		scanf("%i",&continuar);
	}
	while (continuar==1);
}
