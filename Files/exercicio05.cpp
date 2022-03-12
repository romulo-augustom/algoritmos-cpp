#include <fstream>
#include <iostream>
using namespace std;

int main(){
	ifstream fin("texto5.txt");
	ofstream fout("5novo.txt");
	string nome;
	float salario;
	int cargo;
	float aumento;
	float novo;
	
	while(!fin.eof()){
		fin >> nome;
		fin >> salario;
		fin >> cargo;
		fout << nome << ": ";
		
		if (cargo==1){
			aumento = salario * 0.10;
			novo = salario + aumento;
			fout << novo << endl;
		}
		
		if (cargo==2){
			aumento = salario * 0.20;
			novo = salario + aumento;
			fout << novo << endl;
		}
		
		if (cargo==3){
			aumento = salario * 0.30;
			novo = salario + aumento;
			fout << novo << endl;
		}
		
		if ((cargo!=1) and (cargo!=2) and (cargo!=3)){
			aumento = salario * 0.40;
			novo = salario + aumento;
			fout << novo << endl;
		}
	}
}
