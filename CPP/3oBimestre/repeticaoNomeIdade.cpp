#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[20];
	int idade, contador;
	contador = 1;
	while(contador <=3){
		printf("Indique seu nome: ");
		scanf("%s",&nome);
		printf("Indique a idade: ");
		scanf("%i",&idade);
		printf("%s tem %i anos de idade\n",nome,idade);
		contador++;
	}
}
