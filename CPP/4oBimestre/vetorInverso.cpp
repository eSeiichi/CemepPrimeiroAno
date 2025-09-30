//Programa que exibe o vetor
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	//declaração das variáveis
	int cont;
	int vet[5]; //exemplo: 0,1,2,3,4
	//entrada de dados
	for (cont=0;cont<5;cont++){
		cout << "Entre com um número: ";
		cin >> vet[cont];
	}
	for (cont=0;cont<5;cont++){
		cout << "O número armazenado no vetor " << 5-cont << " = " << vet[(4-cont)] << "\n";
	}
	return 0;	
}
