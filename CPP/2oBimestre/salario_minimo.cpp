/*Leia o nome e o sal�rio de um funcion�rio. 
Caso o sal�rio seja maior que ou igual a R$:1500 exiba:
 "Voc� ganha mais que um sal�rio m�nimo", 
 caso contr�rio exiba: "Voc� precisa de um aumento"*/
 #include<stdio.h>
 #include<locale.h>
 main()
 {
	float salario;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o seu sal�rio: ");
	scanf("%f",&salario);
	if (salario >= 1500)
		printf("Voc� ganha mais que um sal�rio m�nimo");
	else
		printf("Voc� precisa de um aumento");
 }
