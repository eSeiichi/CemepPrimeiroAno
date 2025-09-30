#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,idade, um=0, dois=0, tres=0, quatro=0, cinco=0;
	for(i=1;i<=6;i++){
		cout << "Digite uma idade: " ;
		cin >> idade;
		if(idade<=15){
			um++;
		}
		else if (idade >= 16 && idade <= 30){
			dois++;
		}
		else if (idade >= 31 && idade <= 45){
			tres++;
		}
		else if (idade >= 46 && idade <= 60){
			quatro++;
		}
		else if (idade >= 61){
			cinco++;
		}
	}
	cout << "Há " << um << " pessoas com menos de 15 anos (" << 100*um/6 << "% do total)\n";
	cout << "Há " << dois << " pessoas entre 16 e 30 anos (" << 100*dois/6 << "% do total)\n";
	cout << "Há " << tres << " pessoas entre 41 e 45 anos (" << 100*tres/6 << "% do total)\n";
	cout << "Há " << quatro << " pessoas entre 46 e 60 anos (" << 100*quatro/6 << "% do total)\n";
	cout << "Há " << cinco << " pessoas acima de 61 anos (" << 100*cinco/6 << "% do total)\n";
	return 0;
}

