#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;

//double comprimentoCircunferencia (double raio);
//double areaCirculo (double raio);
//double volumeEsfera (double raio);

double comprimentoCircunferencia (double raio){
	return (raio*pi*2);
}

double areaCirculo (double raio){
	return (pi*(pow(raio,2)));
}

double volumeEsfera (double raio){
	return ((4.0/3)*pi*(pow(raio,3)));
} 

int main (){
	double raio;
	
	cout << "Digite o raio r" << endl;
	cin >> raio;
	
	cout << "O comprimento do circulo e: " << comprimentoCircunferencia(raio) << endl;
	cout << "A area do circulo e: " << areaCirculo(raio) << endl;
	cout << "O volume da esfera e: " << volumeEsfera(raio) << endl;
	
	return 0;
}

