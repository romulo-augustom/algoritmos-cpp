#include <iostream>
#include <cmath>
using namespace std;

double areaQuadrado (double l);

double areaQuadrado (double l){
	return (pow (l,2));
}

int main (){
	double lado;
	
	cout << "Digite o valor do lado do quadrado: " << endl;
	cin >> lado;
	
	cout << "A area do quadrado de lado " << lado << " e: " << areaQuadrado(lado);
	
	return 0;
}
