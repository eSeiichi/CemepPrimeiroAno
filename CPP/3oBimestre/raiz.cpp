#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int num, continuar=1;
	float resp;
	do{
		printf("Digite um n�mero para descobrir sua raiz: ");
		scanf("%i",&num);
		if (num<0)
			printf("Este n�mero � negativo");
		else {
			resp= sqrt(num);
			printf("A raiz do n�mero %i coresponde a: %.2f\n",num,resp);
		}
		printf("Se desejar continuar, digite \'1\': ");
		scanf("%i",&continuar);
	}
	while (continuar==1);
}
