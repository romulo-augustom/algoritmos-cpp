#include <iostream>
using namespace std;

/**
 * A conversao de graus Farenheit para centigrados e obtida por C = 5/9 * (F - 32). Faça um
 * algoritmo que calcule e imprima uma tabela de graus Celsius em função de graus Fahrenheit, 
 * que variam de 50 a 150 de 1 em 1. 
 */ 

int main (){
	int f;
	double c;

	for (f=50; f<=150; f++){
		c = (5.0/9)*(f-32);
		cout << c << " ";
	}
	
	cout << endl;
	
	return 0;
}
