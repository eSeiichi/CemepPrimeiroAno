#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,idade,maior=0;
	
	for(i=0;i<=2;i++){
		cout << "Digite uma idade: ";
		cin >> idade;
		if (idade >= 18) maior++;
	}
	cout << "Número de pessoas maiores de idade: " << maior;
	return 0;
}
