#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fin;
	string arquivo;
	string texto;
	string verif;
	int qtd;
	
	cout << "Digite o nome do arquivo a ser lido (.txt): ";
	cin >> arquivo;
	fin.open(arquivo.c_str(),ios::in);
	cout << "Digite a palavra desejada: ";
	cin >> verif;
	while(!fin.eof()){
		fin >> texto;
		if (texto==verif){
			qtd++;
		}
	}
	cout << "\nA palavra " << verif << " aparece " << qtd << " vez(es) no arquivo texto informado." << endl;
}
