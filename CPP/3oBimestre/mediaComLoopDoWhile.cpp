#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int loop=1, i=1;
	float num, med;
	do{
		med,num,i=0;
		do{
			cout << "digite a nota: ";
			cin >> num;
			med+=num;
			i++;
		}
		while(i<5);
		med/=5;
		cout << "A média das notas é " << med << "\n";
		cout << "se desejar continuar o programa, digite \"1\": ";
		cin >> loop;
	}
	while(loop==1);
}
