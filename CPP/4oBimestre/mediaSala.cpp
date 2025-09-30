#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, nota=0, media, mediaSala=0;
	for (i=0;i<=2;i++){
		media=0;
		for (j=0;j<=2;j++){
			cout << "Digite a nota " << j+1 << " do aluno " << i+1 << ": ";
			cin >> nota;
			media+=nota;
		}
		cout << "Média do aluno " << i+1 << ": " << media/3 << "\n";
		mediaSala+=(media/3);
	}
	cout << "A média da sala foi: " << mediaSala/3;
	return 0;
}
