/*5)      Faça um programa que receba a idade
e o peso de 7 pessoas. Calcule e exiba as médias dos pesos das pessoas da mesma
faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e maiores de 30 anos.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1,idade, um=0, dois=0, tres=0, quatro=0;
	float peso, med1=0, med11=0, med21=0, med30=0;
	for(i=1;i<=7;i++){
		peso=0,idade=0;
		cout << i << "	Digite uma idade: ";
		cin >> idade;
		cout << "	Digite um peso: ";
		cin >> peso;
		if(idade >=0 && idade<=10){
			med1+=peso;
			um++;
		}
		else if(idade >=11 && idade <= 20){
			med11+=peso;
			dois++;
		}
		else if(idade >=21 && idade <= 30){
			med21+=peso;
			tres++;
		}
		else if (idade >=30){
			med30+=peso;
			quatro++;
		}
		else{
			cout << "Erro";
		}
	}
	cout << "Média do peso de pessoas entre 1 e 10 anos: " << med1/um << "\nMédia do peso de pessoas entre 11 e 20 anos: " << med11/dois << "\nMédia de peso de pessoas entre 21 e 30 anos: " << med21/tres << "\nMédia do peso de pessaos com mais de 30 anos: " << med30/quatro;
	return 0;
}
