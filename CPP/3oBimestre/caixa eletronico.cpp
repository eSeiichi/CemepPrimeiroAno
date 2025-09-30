#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	float S=1000,V;
	int op;
	do {
		puts("\n1-Depósito");
		puts("2 - Saque");
		puts("3 - Saldo");
		puts("4 - Sair");
		scanf("%i",&op);
		switch(op) {
			case 1: printf("\nValor do depósito: ");
				scanf("%f",&V);
				S=S-V; break;
			case 2: printf("\nValor do saque: ");
				scanf("%f",&V);
				S=S-V; break;
				case 3: printf("\nSaldo atual = R$ %.2f\n",S);
					break;
				default: if (op!=4) puts("\nOpção inválida!");		
		}
	} while (op!=4);
		puts("fim das transações");
}

