#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int num,loop=1,vezes=0,multiplicacao;
	while (loop==1){
		printf("digite um número para mostrar a tabuada dele: ");
		scanf("%i",&num);
		while (vezes<11){
			multiplicacao=vezes*num;
			printf("%i x %i = %i\n",num,vezes,multiplicacao);
			vezes++;
		}	
		vezes=0;
		printf("Digite \"1\", caso queira continuar o programa, caso contrário digite \"0\": ");
		scanf("%i",&loop);
	}
}
