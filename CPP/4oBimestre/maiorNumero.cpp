#import <stdio.h>
main(){
	int a,b,c,loop==1;
	while (loop ==1){
		printf("digite um n�mero para a: ");
		scanf("%i",&a);
		printf("digite um n�mero para b: ");
		scanf("%i",&b);
		printf("digite um n�mero para c: ");
		scanf("%i",&c);
		
		if a==b || b==c || c==a:
			if  a==b && b==c && c==a:
				printf("todos os n�meros s�o iguais");
			else if a==b && a>c:
				printf("a e b s�o maiores do que c");
			else if a==b && a<c:
				printf("c � o maior n�mero");
			else if b==a && b>c:
				printf("a e b s�o maiores do que c");
			else if b==a && b<c:
				printf("c � o maior n�mero");
			else if c==a && c>b:
				printf("a e c s�o maiores do que b");
			else if c==a && c<b:
				printf("b � o maior n�mero");
		else if a>b && a>c:
			printf("a � o maior n�mero");
		else if b>a && b>c:
			printf("b � o maior n�mero");
		else if c>a && c>b:
			printf("c � o maior n�mero");
		printf("se quiser continuar o programa digite\"1\", se n�o digite \"0\"");
		scanf("%i",loop);
	}
}
