#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int A, B, R, loop;
	
	do{
		cout << "Digite um valor numérico para \"A\": ";
		cin >> A;
		cout << "Digite um valor numérico para \"B\": ";
		cin >> B;
		R=A+B;
		cout << "O valor da soma de \"A\" e \"B\", corresponde a: " << R<<"\n";
		loop++;
	}
	while(loop<5);
	return 0;
}
