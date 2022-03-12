#include <iostream>
#include <fstream>
using namespace std;

/*
 *  Crie um programa que leia um arquivo texto que contenha um n�mero inteiro por linha.
 *  Esse programa deve gravar em um arquivo os n�meros que s�o par e em outro arquivo os n�meros que s�o impar.
 */

int main(){
	ifstream fin("texto2.txt");
	ofstream par("2par.txt");
	ofstream impar("2impar.txt");
	int num;
	
	while(!fin.eof()){
		fin >> num;
		if (num%2==0){
			par << num << ";" << endl;
		}
		else{
			impar << num << ";" << endl;
		}
	}
}
