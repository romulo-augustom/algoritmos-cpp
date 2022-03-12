#include <iostream>
using namespace std;

/*
 *  Crie um programa com uma struct chamada Produto.
 *	Tal struct deve possuir 3 campos: nome (char[20]), preco (float) e estoque (int).
 *
 *	Faça com que o usuário preencha todos os dados desse vetor.
 *	Ao final, exiba os dados do produto mais caro e do produto mais barato.
 */

struct produto{
	char nome[20];
	float preco;
	int estoque;
};

int main(){
	produto x[9999];
	int y;
	int z;
	cout << "Digite a quantidade de produtos que deseja cadastrar: " << endl;
    cin >> z;
    system ("cls");
	for (y=0; y<z; y++){
		cout << "Digite o nome do produto: ";
		cin >> x[y].nome;
		cout << "Digite o preco do produto: ";
		cin >> x[y].preco;
		cout << "Digite a quantidade no estoque do produto: ";
		cin >> x[y].estoque;
		system ("cls");
 	}
 	
 	float menor = 99999999;
 	float maior = 0;
 	
 	for (y=0; y<z; y++){
		if(maior < x[y].preco){
        	maior = x[y].preco;
        }
        if(menor > x[y].preco){
            menor = x[y].preco;
        }
	}
	for (y=0; y<z; y++){
		if(x[y].preco==maior){
            cout << "\n\nProduto mais caro " << endl;
            cout << "Nome: " << x[y].nome << "      Preco: " << x[y].preco << "     Estoque: " << x[y].estoque << endl;
        }
        if(x[y].preco==menor){
            cout << "\nProduto mais barato " << endl;
            cout << "Nome: " << x[y].nome << "      Preco: " << x[y].preco << "     Estoque: " << x[y].estoque << endl;	
			}	
}
}
