#include<iostream>
#include<locale.h>
using namespace std;

int main(){
	int num, loop=1,menor,i=0;
	setlocale(LC_ALL, "Portuguese");
	do{
		for (i=0;i<=3;i++){
			cout << "Digite um número: ";
			cin >> num;
			if (i==0){
				menor=num+1;
			}
			if (num<menor){
				menor=num;
				i++;
			}
		}
		cout << "O menor é " << menor << "\n";
		cout << "Se desejar continuar digite \"1\": ";
		cin >> loop;
	}
	while(loop==1);
	
	return 0;
}
