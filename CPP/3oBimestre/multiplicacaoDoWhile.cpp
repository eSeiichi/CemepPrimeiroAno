#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int n1,n2,multiplicacao;
	char cont='S';
	do{
		printf("Digite o primeiro número: ");
		scanf("%i",&n1);
		printf("Digite segundo número: ");
		scanf("%i",&n2);
		multiplicacao=n1*n2;
		printf("A multiplicação é: %i\n",multiplicacao);
		printf("Deseja continuar? Se sim, digite \'S\': ");
		scanf("%c",&cont);
	}
	while(cont=='S'); 
}

