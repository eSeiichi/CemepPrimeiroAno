#include<iostream>
using namespace std;
int main(){
	int i, idade, maiorIdade;
	for(i=1;i<=10;i++){
		cout << "Digite a idade (" << i << "): ";
		cin >> idade;
		if(idade >= 18){
			maiorIdade++;
		}
	}
	cout << "Número de pessoas maiores de 18 anos: " << maiorIdade;
	return 0;
}
