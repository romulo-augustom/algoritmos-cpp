#include <iostream>
using namespace std;

/*
 *  Implemente uma struct denominada Retangulo.
 *	Seus atributos serão altura e largura (float).
 *
 *	Crie um programa onde o usuário insira a altura e a largura de duas variáveis do tipo retângulo.
 *	Este programa deve então exibir as áreas dos dois retângulos.
 */

struct Retangulo{
	float altura;
	float largura;
};

int main(){
	
	Retangulo a;
	cout << "Digite a altura do retangulo A : " << endl;
	cin >> a.altura;
	cout << "Digite a largura do retangulo A : " << endl;
	cin >> a.largura;
	
	Retangulo b;
	cout << "\nDigite a altura do retangulo B : " << endl;
	cin >> b.altura;
	cout << "Digite a largura do retangulo B : " << endl;
	cin >> b.largura;

	cout << "\nA area do retangulo A e = " << a.altura * a.largura << endl;
	cout << "A area do retangulo B e = " << b.altura * b.largura << endl;
	
	return 0;
}
