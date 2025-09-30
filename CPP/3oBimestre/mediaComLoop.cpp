#include<stdio.h>
#include<stdio.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int loop=1,i=1;
	float num,med;
	while (loop==1){
		med,num,i=0;
		while(i<=5){
			printf("digite a nota: ");
			scanf("%f",&num);
			med+=num;
			i++;
		}
		med/=5;
		printf("a média das notas é %.2f\n",med);
		printf("se desejar continuar o programa, digite \"1\": ");
		scanf("%i",&loop);
	}
}
