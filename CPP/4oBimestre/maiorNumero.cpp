#import <stdio.h>
main(){
	int a,b,c,loop==1;
	while (loop ==1){
		printf("digite um número para a: ");
		scanf("%i",&a);
		printf("digite um número para b: ");
		scanf("%i",&b);
		printf("digite um número para c: ");
		scanf("%i",&c);
		
		if a==b || b==c || c==a:
			if  a==b && b==c && c==a:
				printf("todos os números são iguais");
			else if a==b && a>c:
				printf("a e b são maiores do que c");
			else if a==b && a<c:
				printf("c é o maior número");
			else if b==a && b>c:
				printf("a e b são maiores do que c");
			else if b==a && b<c:
				printf("c é o maior número");
			else if c==a && c>b:
				printf("a e c são maiores do que b");
			else if c==a && c<b:
				printf("b é o maior número");
		else if a>b && a>c:
			printf("a é o maior número");
		else if b>a && b>c:
			printf("b é o maior número");
		else if c>a && c>b:
			printf("c é o maior número");
		printf("se quiser continuar o programa digite\"1\", se não digite \"0\"");
		scanf("%i",loop);
	}
}
