/*4)      Tem-se um conjunto de dados
contendo a altura e o sexo (1-M/2-F) de 5 pessoas. Faça um programa que calcule
e exiba:
a)A maior e a menor altura do grupo;
b)A média de altura das mulheres;
c)O número de homens. */
#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, genero, homens=0;
	float altura, menor=999999, maior=0, mediaMulher;
	for(i=1;i<=5;i++){
		genero=0;
		cout << "Digite 1 para mulher ou 2 para homem: ";
		cin >> genero;
		cout << "Digite a altura: ";
		cin >> altura;
		if (altura >= maior){
			maior = altura;
		}
		if (altura <= menor){
			menor = altura;
		}
		if (genero == 1){
			mediaMulher+= altura;
		}
		else if (genero == 2){
			homens +=1;
		}
	}
	cout << "A maior altura registrada foi: " << maior << "\nA menor altura registrada foi: " << menor << "\nA média das alturas das mulheres foi: " << mediaMulher/(5-homens) << "\nO número de homens registrados foi: " << homens;
	return 0;
}
