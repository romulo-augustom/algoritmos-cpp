#include <iostream>
#include <string.h>
using namespace std;

/*
 *  Crie um programa que possua uma struct denominada Projeto.
 *	Com os campos nome(char[20]), horastrabalhadas (int) e valorhora (float).
 *
 *	Crie uma função denominada valorProjeto, que recebe uma variável do tipo Projeto 
 *  e retorne o resultado da multiplicação dos campos horastrabalhadas e valorhora.
 
 *	 Crie um vetor do tipo Projeto. Crie um menu da seguinte forma:
 *   1 - Inserir um projeto
 *   2 - Exibir os dados do projeto cujo nome é informado pelo usuário
 *   3 – Listar todos dados dos projetos, inclusive o resultado da função valorProjeto()
 *   4 – Sair
 */

struct Projeto{
	char nome[20];
	int horastrabalhadas;
	float valorhora;
};

float valorProjeto(int ht, float vh){
	return ht * vh;
}

char verif[20];

int main(){
	Projeto x[999];
	int op;
	int qtd;
	int cont;
	int y;
	int i;
	int j;
	while (op!=4){
		cout << " | Menu |\n 1 - Inserir um projeto\n 2 - Exibir dados de um projeto\n 3 - Listar todos os dados dos projetos\n 4 - Sair \n" << endl;
		cin >> op;
		system ("cls");
		
		if (op==1){
			cout << "Digite quantos projetos deseja cadastrar: ";
			cin >> y;
			system ("cls");
			cont = qtd;
			qtd = cont + y;
			for (cont; cont<qtd; cont++){
				
				cout << "\nDigite o nome do projeto: ";
				cin >> x[cont].nome;
				cout << "Digite as horas trabalhadas: ";
				cin >> x[cont].horastrabalhadas;
				cout << "Digite o valor pago por hora: ";
				cin >> x[cont].valorhora;
				system ("cls");
			}
		}
		
		if (op==2){
			cout << "Digite o nome do projeto que deseja exibir os dados: ";
			cin >> verif;
			for (i=0; i<qtd; i++){
				if (strcmp(x[i].nome, verif)==0){
					cout << "\n| Projeto |" << endl;
					cout << "Nome: " << x[i].nome << " \nHoras trabalhadas: " << x[i].horastrabalhadas << " \nValor por hora: " << x[i].valorhora << " \nValor total: " << valorProjeto(x[i].horastrabalhadas, x[i].valorhora) << "\n" << endl;	
				}
			}
		}
		
		if (op==3){
			for (j=0; j<qtd; j++){
				cout << "\n| Projetos |" << endl;
				cout << "Nome: " << x[j].nome << " \nHoras trabalhadas: " << x[j].horastrabalhadas << " \nValor por hora: " << x[j].valorhora << " \nValor total: " << valorProjeto(x[j].horastrabalhadas, x[j].valorhora) << "\n" << endl;	
			}
		}
	}
	return 0;
}

