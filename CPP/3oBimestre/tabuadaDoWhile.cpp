#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num,loop=1,vezes=0,multiplicacao;
	do{
		cout << "digite um número para mostrar a tabuada dele: ";
		cin >> num;
		while (vezes<11){
			multiplicacao=vezes*num;
			cout << num << "x" << vezes << "=" << multiplicacao << "\n";
			vezes++;
		}	
		vezes=0;
		cout << "Digite \"1\", caso queira continuar o programa, caso contrário digite \"0\": ";
		cin >> loop;
	}
	while(loop == 1);
	return 0;
}
