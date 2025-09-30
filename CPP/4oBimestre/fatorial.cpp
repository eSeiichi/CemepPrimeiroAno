#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, num, fat=1;
	cout << "Digite um número para saber seu fatoria: ";
	cin >> num;
	for(i=1;i<=num;i++){
		fat*= i;
	}
	cout << fat;
	return 0;
}
