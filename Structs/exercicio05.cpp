#include <iostream>
using namespace std;

/*
 *  Crie um programa que possua uma struct de nome Aluno, com os campos nome (char[20]) e nota (float).
 *	Crie um vetor do tipo Aluno (10 posições).
 *
 *	Faça o usuário preencher tal vetor com valores em todos os campos,
 *	Depois exiba o nome e a nota de todos os alunos.
 */

struct aluno{
	char nome[20];
	float nota;
};

void result(aluno x){
	cout << "Nome: " << x.nome << "       Nota: " << x.nota << endl;
}

int main(){
	aluno x[10];
	int y;
	for (y=0; y<10; y++){
		cout << "Digite o nome do aluno: " << endl;
		cin >> x[y].nome;
		cout << "Digite a nota do aluno: " << endl;
		cin >> x[y].nota;
		system ("cls");
 	}
 	
 	for (y=0; y<10; y++){
		result(x[y]);
	}
}

