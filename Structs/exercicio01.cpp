#include <iostream>
using namespace std;

/*
 *  Implemente uma struct denominada Retangulo.
 *	Seus atributos ser�o altura e largura (float).
 *
 *	Crie um programa onde o usu�rio insira a altura e a largura de duas vari�veis do tipo ret�ngulo.
 *	Este programa deve ent�o exibir as �reas dos dois ret�ngulos.
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
