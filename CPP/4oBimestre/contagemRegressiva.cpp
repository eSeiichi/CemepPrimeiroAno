#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	cout << "Contagem regressiva:\n";
	for(i=0;i<=10;i++){
		cout << 10-i << "\n";
	}
	return 0;
}
