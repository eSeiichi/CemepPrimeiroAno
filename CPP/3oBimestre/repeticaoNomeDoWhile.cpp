#include<iostream>
using namespace std;

int main(){
	int idade, contador;
	char nome[20];
	
	do{
		cout << "Digite seu nome: ";
		cin >> nome;
		cout << "Digite sua idade: ";
		cin >> idade;
		cout << nome << " possui " << idade << " anos\n";
		contador++;
	}
	while(contador <3);
	return 0;
}
