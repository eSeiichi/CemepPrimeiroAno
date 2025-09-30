#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, loop, valor, maior=-9999999999999, menor=99999999999999;
	cout << "Digite o número de números a serem inseridos: ";
	cin >> loop;
	for (i=1;i <= loop;i++){
		cout << "Digite o número " << i << ": ";
		cin >> valor;
		if (valor >= maior){
			maior = valor;
		}
		else if (valor <= menor){
			menor = valor;
		}
	}
	cout << "O menor valor registrado foi: " << menor << " e o maior valor registrado foi: " << maior;
}
