#include <iostream>
using namespace std;

/*
 *  Crie uma struct denominada solucao, com dois campos: elemento (char[20]) e porcentagem (float).
 *	Crie um programa com duas variáveis do tipo solução. 
 *
 *	Faça o usuário preencher todos dos dados dessas variáveis.
 *	Exiba na tela todos os dados da variável que possuir maior porcentagem.
 */

struct solucao{
	char elemento[20];
	float porcentagem;
};

int main(){
	solucao a;
	solucao b;
	
	cout << "Digite o elemento A: " << endl;
	cin >> a.elemento;
	cout << "Digite a porcentagem do elemento A: " << endl;
	cin >> a.porcentagem;
	
	cout << "\nDigite o elemento B: " << endl;
	cin >> b.elemento;
	cout << "Digite a porcentagem do elemento B: " << endl;
	cin >> b.porcentagem;
	system("cls");
		
	if (a.porcentagem > b.porcentagem){
		cout << "\nElemento: " << a.elemento << "    Porcentagem: " << a.porcentagem << endl;
    }
    if (b.porcentagem > a.porcentagem){
        cout << "\nElemento: " << b.elemento << "    Porcentagem: " << b.porcentagem << endl;
    }
    if (a.porcentagem == b.porcentagem){
        cout << "\nOs dois elementos possuem a mesma porcentagem." << endl;
    }
    return 0;
}
