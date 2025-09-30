#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, soma=0;
	for(i=0;i<=2;i++){
		soma+=i;
		cout << soma << "\n";
	}
	return 0;
}
