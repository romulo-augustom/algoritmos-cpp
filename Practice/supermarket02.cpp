#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
using namespace std;

struct lista{
	string nome;
	float quantidade;
	string marca;
	float preco;
};

void split (string linha, char at, string S[]){
	int pos=0, fim, i=0;
	do{
		fim = linha.find(at, pos);
		if (fim == -1)
			S[i] = linha.substr(pos);
		else
			S[i++] = linha.substr(pos, fim - pos);
		pos = fim+1;
	} 
	while (fim != -1);
}

void carregalista (vector <lista> &R){
	string linha;
	ifstream arquivo;
	lista C;
	arquivo.open("Itens.csv");
	if (arquivo.is_open()){
		while (getline (arquivo, linha)){
			cout << linha << '\n';
			string S[5];
			split(linha, ',', S);
			C.nome = S[0];
			C.quantidade = atof(S[1].c_str());
			C.marca = S[2];
			C.preco = atof(S[3].c_str());;
			R.push_back(C);
		}
		arquivo.close();
	} else {
		cout << "Nao foi possivel abrir o arquivo.";
	}
}

void imprime(vector <lista> &R){
	for (int q=0; q<R.size(); q++){
		cout << R[q].nome << endl;
	}
}

void exclui(vector <lista> &R, string it){
  for (int q=0; q<R.size(); q++){
  		if (R[q].nome==it){
  			R.erase(R.begin()+q);
		}
	}
}

void salvalista (vector <lista> R){
	ofstream arquivo;
	arquivo.open("Itens.csv", ios::app );
	for (int i=0; i < R.size(); i++){
		arquivo << R[i].nome << "," << R[i].quantidade << "," << R[i].marca << "," << R[i].preco << endl;
	}
	arquivo.close();
}

void cadastro (vector <lista> &R, string nome, float quantidade, string marca, float preco){
	lista C;
	C.nome = nome;
	C.quantidade = quantidade;
	C.marca = marca;
	C.preco = preco;
	R.push_back(C);
}

int main(){
	vector <lista> R;
	string nome;
	float quantidade;
	string marca;
	float preco;
	string n;
	int op=1;
	while(op!=0){
		system("cls");
		cout << "Digite: " << endl << "1 - Para inserir um novo item\n" << "2 - Para remover um item\n" << "0 - Para finalizar o programa\n"; 
		cin >> op;
		if(op==1){
			system("cls");
			cout << "Digite o nome do item: ";
			cin >> nome;
			cout << "Digite a quantidade: ";
			cin >> quantidade;
			cout << "Digite a marca: ";
			cin >> marca;
			cout << "Digite o preco: ";
			cin >> preco;
			cadastro(R, nome, quantidade, marca, preco);
			cout << "\nItem cadastrado." << endl;
			system("pause");
		}
		if(op==2){
			system("cls");
			cout << "Digite o nome do item que desejar remover: ";
			cin >> n;
			exclui(R,n);
			cout << "Item excluido." << endl;
			system("pause");
		}
		if(op==0){
			break;
		}
}
	salvalista(R);
	return 0;
}

