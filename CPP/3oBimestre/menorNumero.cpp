#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	int num,loop=1,menor,i=0;
	while(loop==1){
		for (i=0;i<=3;i++){
			printf("Digite número: ");
			scanf("%i",&num);
			if (i==0){
				menor=num+1;
			}
			if (num<menor){
				menor=num;
				i++;
			}
		}
		printf("O menor é %i\n",menor);
		printf("se desejar continuar digite \"1\": ");
		scanf("%i",&loop);
	}
}
