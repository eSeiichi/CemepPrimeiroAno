//equação de segundo grau
#import<math.h>
#import<stdio.h>
#import<locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese")
	float a , b , c , delta , x1 , x2 ; 
	printf("este programa calcula os valores de x' e x\" em uma equação de segundo grau\n");
	printf("digite o valor de a: ");
	scanf("%f", &a);
	printf("digite o valor de b: ");
	scanf("%f", &b);
	printf("digite o valor de c: ");
	scanf("%f", &c);
	delta = pow(b , 2) - 4 * a * c ;
	x1 = (-b + sqrt(delta))/2*a;
	x2 = (-b - sqrt(delta))/2*a;
	printf("x1 (x') = %.2f\n x2 (x\") = %.2f", x1 , x2);
}
