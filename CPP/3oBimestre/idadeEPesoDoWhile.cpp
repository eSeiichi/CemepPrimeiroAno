#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int loop, idade, maiorIdade, menorIdade;
	float peso, menorPeso = 10000.0, maiorPeso = 0, mediaPesos;
	do{
		cout <<"digite sua idade: ";
		cin >> idade;
		if (idade < 40) {
			menorIdade++;
		}
		else if (idade >=50 && idade <= 70){
			maiorIdade++;
		}
		cout << "digite seu peso: ";
		cin >> peso;
		mediaPesos+=peso;
		if (peso < menorPeso){
			menorPeso = peso;
		}
		else if (peso > maiorPeso){
			maiorPeso = peso;
		}
		cout << "/////////////////////////////////////////////////////\n";
		loop++;
	}
	while(loop <9);
	mediaPesos/=10;
	cout << "O maior peso registrado foi: "<< maiorPeso <<"\nO menor peso registrado foi: " << menorPeso << "\nA média dos pesos foi: " << mediaPesos << "\nO número de idades abaixo de 40 anos é: " << menorIdade << "\nO número de idades entre 50 e 70 anos é: " << maiorIdade;
	return 0;
}
