#include<stdio.h>
main(){
	int a,b,r,i;
	do{
		printf("Digite um valor para a: ");
		scanf("%i",&a);
		printf("Digite um valor para b: ");
		scanf("%i",&b);
		r=a+b;
		printf("O resultado corresponde a: %i \n",r);
		i++;
	}
	while(i<=5);
}
