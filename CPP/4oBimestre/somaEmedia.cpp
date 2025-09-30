#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,idade=0, soma=0;
	for (i=0;i<=2;i++){
		cout << "Digite uma idade: ";
		cin >> idade;
		soma+= idade;
	}
	cout << "Soma das idades: " << soma << "\nMédia das idades: " << soma/3;
	return 0;
}
