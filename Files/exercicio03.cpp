#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ifstream fin("texto3.txt");
	ofstream fout("notas.txt");
	string nome;
	float nf;
	float t;
	float p;
	float p1, p2;
	float t1, t2, t3, t4;
	while(!fin.eof()){
		fin >> nome;
		fin >> p1;
		fin >> p2;
		fin >> t1;
		fin >> t2;
		fin >> t3;
		fin >> t4;
		p = ((p1+p2)/2)*0.7;
		t = ((t1+t2+t3+t4)/4)*0.3;
		nf = p + t;
		fout << nome << ": " << nf << endl;
		cout << "Aluno: " << nome << "   Nota: " << nf << endl;
	}
}
