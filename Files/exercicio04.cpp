#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ifstream fin;
	ofstream fout("4bonus.txt");
	string nome;
	int idade;
	float servico;
	int filhos;
	int op;
	float bonus;
	float valori;
	float bonusi;
	float bonusf;
	float bonust;
	
	while(op!=0){
		cout << "Digite o nome do empregado: ";
		cin >> nome;
		fout << nome << ": ";
		cout << "Digite a idade do empregado: ";
		cin >> idade;
		cout << "Digite o tempo de servico do empregado: ";
		cin >> servico;
		cout << "Digite o numero de filhos do empregado: ";
		cin >> filhos;
		
		if (idade > 45){
			valori = idade - 45;
			bonusi = valori * 5;
		}
		
		if (filhos > 3){
			bonusf = 45;
		}
		
		if (filhos <= 3){
			bonusf = filhos * 15;
		}
		
		bonust = servico * 20;
		
		bonus = bonusi + bonusf + bonust;
		cout << "\nCadastro realizado com sucesso. Resultado inserido no arquivo texto.\n\n" << endl;
		fout << "R$" << bonus << endl;
		system ("pause");
		system ("cls");
		cout << "Digite: " << "\n1 - Para cadastrar outro empregado." << "\n0 - Para finalizar o programa." << endl;
		cin >> op;
		system ("cls");
	}
	return 0;
}
