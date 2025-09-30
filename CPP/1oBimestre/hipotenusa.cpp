/*Forneça o resultado da:
hipotenusa² = cateto² + cateto² 
salvar como hipotenusa.cpp
"O valor da hipotenusa é..."*/

#include<math.h>
#include<locale.h>
#include<stdio.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int c1 , c2 ;
	float h ; 
	printf("Este programa calcula o valor da hipotenusa.\ndigite o valor do primeiro cateto: ");
	scanf("%i", &c1);
	printf("Digite o valor do segundo cateto: ");
	scanf("%i", &c2);
	h = sqrt( pow(c1 , 2) + pow(c2 , 2));
	printf("o valor da hipotenusa é: %.2f", h);
}
