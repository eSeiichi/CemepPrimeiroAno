//programa triângulo
#include<math.h>
#include<stdio.h>
#include<locale.h>

main()
{
	float A, B, C ;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do lado A: ");
	scanf("%f",&A);
	printf("Digite o valor do lado B: ");
	scanf("%f",&B);
	printf("Digite o valor do lado C: ");
	scanf("%f",&C);
	if (A<(C+B) && B<(A+C) && C<(B+A))
		{
		if (A == B && B == C)
			printf("Seu triângulo é EQUILÁTERO");
		else if (A == B || B == C || C == A)
			printf("Seu triângulo é ISÓSCELES");
		else if (A != B || C != A)
			printf("seu triângulo é ESCALENO");
		}	
	else
		printf("Sua forma não é um triângulo");		
}
