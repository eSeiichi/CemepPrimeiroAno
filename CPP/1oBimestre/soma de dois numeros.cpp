/* elabore um programa que leia dois n�meros, calcule a soma 
e exiba o resultado */

#include<stdio.h> //biblioteca que habilita o printf e o scanf
#include<locale.h> //biblioteca utilizada para acentua��o, habilita o setlcale
main() //principal
{ //imicio do programa
	setlocale(LC_ALL, "Portuguese"); //comando que utiliza acentua��o do nosso pa�s
	int A, B, SOMA, SUBTRACAO, MULTIPLICACAO; //declara��o das vari�veis
	float DIVISAO;
	printf("este programa soma dois n�meros inteiros.\n"); //mensagem exibida na tela
	printf("digite o primeiro n�mero: "); 
	scanf("%i",&A); //entrada de dados
	printf("digite o segundo n�meor: ");
	scanf("%i,",&B);
	SOMA=A+B; //c�lculo
	SUBTRACAO=A-B;
	MULTIPLICACAO=A*B;
	DIVISAO=A/B;
	printf("o resultado da soma foi: %i \n",SOMA); //exibi��o de dados
	printf("o resultado da subtra��o foi: %i \n", SUBTRACAO);
	printf("o resultado da multiplica��o foi: %i \n", MULTIPLICACAO);
	printf("o resultado da divis�o foi: %f \n",DIVISAO);	
} //fim do programa
