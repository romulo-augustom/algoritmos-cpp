#include <fstream>
#include <iostream>
using namespace std;

/*
 *  Crie um programa para ler 20 n�meros inteiros positivos de um arquivo. 
 *  A partir desses n�meros, exiba para o usu�rio a m�dia e a quantidade de n�meros menores do que 1.
 */

int main(){
	ifstream fin("texto1.txt");
	int num;
	int qtd=0;
	float soma=0;
	int i=0;
	float media;
	
	for(i; i<20; i++){
		fin >> num;
		soma = soma + num;
		if (num<10){
			qtd++;
		}
	}
	
	media = soma/20;
	cout << "A media e = " << media << "\n" << "A quantidade de numeros menores que 10 e = " << qtd << endl;
}
