#include <iostream>
#include <string.h>
using namespace std;

struct aluno{
	char nome[50];
	float prova1;
	float prova2;
};

aluno x[40];	
void cadastro(int y, char n[50], float pv1, float pv2){
	if (y<40){
		strcpy(x[y].nome, n);
		x[y].prova1 = pv1;
		x[y].prova2 = pv2;
	}
}

void result (int fim){
	cout << x[fim].nome << endl;
}

int main(){
	char n[50];
	float pv1;
	float pv2;
	int y;
	int i;
	int qtd=0;
	int ap;
	int re;
	for (i=0; i<40; i++){
		cout << "Digite o nome do aluno: ";
		cin >> n;
		cout << "Digite a nota obtida na prova 1: ";
		cin >> pv1;
		cout << "Digite a nota obtida na prova 2: ";
		cin >> pv2;
		cadastro(i, n, pv1, pv2);
		qtd++;
		system ("cls");
	}
	cout << "|Alunos Aprovados| " << endl; 
	for (ap=0; ap<60; ap++){
		if (x[ap].prova1 + x[ap].prova2 >= 60){
			result(ap);
		}
	}
	cout << "\n|Alunos Reprovados| " << endl;
	for (re=0; re<60; re++){
		if (x[re].prova1 + x[re].prova2 < 60){
			result(re);
		}
	}
	
}
