/* O perfil de uma pessoa é dado pelo seu ano de nascimento. Por exemplo, se o ano é 1987, 
calculamos a soma 19+87, dividimos seu resultado (106) por 5 e pegamos o resto (1). 
Este resto indica o perfil da pessoa: 0- tímido, 1- sonhador, 2-paquerador, 3- atraente, 
4- irresistível. Dado o ano de nascimento de uma pessoa, informe qual é o seu perfil. */

#include<stdio.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int n1 , n2, resto;
	printf("Este programa recebe seu ano de nascimento e diz sua personalidade baseado em nada.\nDigite os dois primeiros dígitos de seu ano de nascimento: ");
	scanf("%i",&n1);
	printf("Digite os dois últimos números: ");
	scanf("%i",&n2);
	resto = (n1 + n2) % 5;
	if (resto == 0)
		printf("tímido");
	else if (resto == 1)
		printf("sonhador");
	else if (resto == 2)
		printf("paquerador");
	else if (resto == 3)
		printf("atraente");
	else if (resto == 4)
		printf("irresistível");
}
