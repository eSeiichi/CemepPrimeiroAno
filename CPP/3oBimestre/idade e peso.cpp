#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int loop, idade, maiorIdade, menorIdade;1
	float peso, menorPeso = 10000.0, maiorPeso = 0, mediaPesos;
	while (loop <=9){
		printf("digite sua idade: ");
		scanf("%i",&idade);
		if (idade < 40) {
			menorIdade++;
		}
		else if (idade >=50 && idade <= 70){
			maiorIdade++;
		}
		printf("digite seu peso: ");
		scanf("%f",&peso);
		mediaPesos+=peso;
		if (peso < menorPeso){
			menorPeso = peso;
		}
		else if (peso > maiorPeso){
			maiorPeso = peso;
		}
		printf("/////////////////////////////////////////////////////\n");
		loop++;
	}
	mediaPesos/=10;
	printf("O maior peso registrado foi: %.2f\nO menor peso registrado foi: %.2f\nA média dos pesos foi: %.2f\nO número de idades abaixo de 40 anos é: %i\nO número de idades entre 50 e 70 anos é: %i",maiorPeso,menorPeso,mediaPesos,menorIdade,menorIdade);
}
