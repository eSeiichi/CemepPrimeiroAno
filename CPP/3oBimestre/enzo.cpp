//desenvolvido por: enzo 1oY
#import<stdio.h>
#import<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int genero, homem, mulher=0, loop=0;
	float altura, medMulher, maiorAltura=0, menorAltura=4;
	
	while (loop<=9){
		printf("\nDigite \"1\" para homem e \"2\" para mulher: ");
		scanf("%i",&genero);
		printf("Digite a altura: ");
		scanf("%f",&altura);
		
		if (genero == 1){
			homem++;	
		}
		else if (genero == 2){
			mulher++;
			medMulher+=altura;
		}
		else{
			printf("genro inválido");
		}
		
		
		if (altura >= maiorAltura){
			maiorAltura = altura;
		}
		else if (altura <= menorAltura){
			menorAltura = altura;
		}
		loop++;
	}
	medMulher/=mulher;
	printf("Há %i mulheres, %i homens, a maior altura é %.2f, a menor altura é %.2f e a média das alturas das mulheres é de %.2f.",mulher,homem,maiorAltura,menorAltura,medMulher);
}
