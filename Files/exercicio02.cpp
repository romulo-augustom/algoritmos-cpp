#include <iostream>
#include <fstream>
using namespace std;

/*
 *  Crie um programa que leia um arquivo texto que contenha um número inteiro por linha.
 *  Esse programa deve gravar em um arquivo os números que são par e em outro arquivo os números que são impar.
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
