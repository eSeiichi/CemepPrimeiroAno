/*Faça um programa que leia os coeficientes a, b, c, d, e, f, 
calcule e exiba os valores x e y de um  sistema de equação linear do tipo:
ax + by = c
dx + ey = f
Utilizando:
x = (ce - bf)/(ae - bd)
y = (af - cd)/(ae - bd)

"x é igula a ____ e y é igual a ___" */

#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	int a, b, c, d, e, f;
	float x, y;
	setlocale (LC_ALL,"Portuguese");
	printf("Este programa calcula os valores de X e Y dentro de um sistema linear\n ax + by = c\n dx + ey = f \n");
	printf("Digite o valor de a: ");
	scanf("%i",&a);
	printf("Digite o valor de b: ");
	scanf("%i",&b);
	printf("Digite o valor de c: ");
	scanf("%i",&c);
	printf("Digite o valor de d: ");
	scanf("%i",&d);
	printf("Digite o valor de e: ");
	scanf("%i",&e);
	printf("Digite o valor de f: ");
	scanf("%i",&f);
	x = ((c * e) - (b * f)) / ((a * e) - (b * d));
	y = ((a * f) - (c * d)) / ((a * e) - (b * d));
	printf("X é igual a: %2.f\n", x);
	printf("Y é igual a: %2.f", y);
}
