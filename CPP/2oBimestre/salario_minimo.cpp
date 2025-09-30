/*Leia o nome e o salário de um funcionário. 
Caso o salário seja maior que ou igual a R$:1500 exiba:
 "Você ganha mais que um salário mínimo", 
 caso contrário exiba: "Você precisa de um aumento"*/
 #include<stdio.h>
 #include<locale.h>
 main()
 {
	float salario;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o seu salário: ");
	scanf("%f",&salario);
	if (salario >= 1500)
		printf("Você ganha mais que um salário mínimo");
	else
		printf("Você precisa de um aumento");
 }
