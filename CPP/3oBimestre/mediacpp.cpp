#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int continuar=1;
	float n1, n2, med;
	do {
		printf("Digite a primeira nota do aluno: ");
		scanf("%f",&n1);
		printf("Digite a segunda nota do aluno: ");
		scanf("%f",&n2);
		med=(n1+n2)/2;
		if (n1 < 0 || n1>10 ||n2 <0 || n2>0){
			printf("Nota fora do padrão\n");
		}
		else{
			printf("A média do aluno é de: %.2f\n",med);
		}
		printf("Se desejar continuar, digite \'1\': ");
		scanf("%i",&continuar);
	}
	while(continuar==1);
}
