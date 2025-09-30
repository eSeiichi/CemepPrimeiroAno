/*6)Faça um programa que receba duas notas de 6 alunos, calcule e exiba:

a)A média entre essas 2 notas de cada aluno;
b)A mensagem de acordo com a tabela abaixo:
Média                  Mensagem


0-----5                  reprovado


5-----7                  recuperação


7-----10                aprovado
c)O total de alunos aprovados e o total de alunos reprovados;
d)A média geral da classe, isto é, a média entre as médias dos alunos.*/
#include<iostream>
#include<locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, aprovados=0, reprovados=0;
	float nota1, nota2, media, mediaGeral=0;
	for (i=1;i<=6;i++){
		cout << "Digite a primeira nota do aluno " << i << ": ";
		cin >> nota1;
		cout << "Digite a segunda nota do aluno " << i << ": ";
		cin >> nota2;
		media= (nota1+nota2)/2;
		cout << "A média do aluno " << i << " foi: " << media << "\n";
		if(media <=5){
			cout << "Reprovado\n";
			reprovados++;
		}
		else if (media>5 && media <=7){
			cout << "Recuperação\n";
		}
		else if (media >7 && media <=10){
			cout << "Aprovado\n";
			aprovados++;
		}
		mediaGeral+=media;
	}
	cout << "O total de alunos reprovados foi: " << reprovados << "\nO total de alunos aprovados foi: " << aprovados << "\nA média geral da classe foi de: " << mediaGeral/6;
	return 0;
}
