/* elabore um programa que leia dois números, calcule a soma 
e exiba o resultado */

#include<stdio.h> //biblioteca que habilita o printf e o scanf
#include<locale.h> //biblioteca utilizada para acentuação, habilita o setlcale
main() //principal
{ //imicio do programa
	setlocale(LC_ALL, "Portuguese"); //comando que utiliza acentuação do nosso país
	int A, B, SOMA, SUBTRACAO, MULTIPLICACAO; //declaração das variáveis
	float DIVISAO;
	printf("este programa soma dois números inteiros.\n"); //mensagem exibida na tela
	printf("digite o primeiro número: "); 
	scanf("%i",&A); //entrada de dados
	printf("digite o segundo númeor: ");
	scanf("%i,",&B);
	SOMA=A+B; //cálculo
	SUBTRACAO=A-B;
	MULTIPLICACAO=A*B;
	DIVISAO=A/B;
	printf("o resultado da soma foi: %i \n",SOMA); //exibição de dados
	printf("o resultado da subtração foi: %i \n", SUBTRACAO);
	printf("o resultado da multiplicação foi: %i \n", MULTIPLICACAO);
	printf("o resultado da divisão foi: %f \n",DIVISAO);	
} //fim do programa
