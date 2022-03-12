#include <iostream>
#include <string.h>
using namespace std;

struct Veiculo{
	char chassi[20];
	char placa[7];
	int fabricacao;
};

void result (Veiculo x){
	cout << "\nChassi: " << x.chassi << "\nPlaca: " << x.placa << "\nFabricacao: " << x.fabricacao << "\n" << endl;
}

Veiculo x[100];
bool insereveiculo(int y, char c[20], char p[7], int f){
	if (y<100){
		strcpy(x[y].chassi,c);
		strcpy(x[y].placa,p);
		x[y].fabricacao = f;
		return true;
	}
	else{
		return false;
	}
}

void buscaporplaca(char p[7]){
	int qt;
	int i;
	for (i=0; i<100; i++){
		if (strcmp(x[i].placa, p)==0){
			result(x[i]);
			qt++;
		}
	}
	if (qt==0){
		cout << "Placa nao encontrada." << endl;
	}
}

int main(){
	int op;
	int cont;
	char c[20];
	char p[7];
	int f;
	while (op!=3){
		cout << " | Menu |\n 1 - Inserir um veiculo\n 2 - Buscar veiculo pela placa\n 3 - Sair \n" << endl;
		cin >> op;
		system ("cls");
		
		if (op==1){
			cout << "Digite o Chassi do veiculo: ";
			cin >> c;
			cout << "Digite a Placa do veiculo: ";
			cin >> p;
			cout << "Digite a Fabricacao do veiculo: ";
			cin >> f;
			if (insereveiculo(cont,c,p,f)==true){
				cout << "Veiculo cadastrado." << endl;
			}
			else {
				cout << "Cadastro nao realizado, numero de veiculo excedido." << endl;
			}
			cont++;
			system ("cls");
		}
		
		if (op==2){
			cout << "Digite a Placa do veiculo: ";
			cin >> p;
			buscaporplaca(p);
			system ("pause");
			system ("cls");
		}
	}
}
