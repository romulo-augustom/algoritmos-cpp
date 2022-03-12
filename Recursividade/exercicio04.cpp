#include <iostream>
using namespace std;

/*
 *  Crie um programa que receba do usuário um número N e exiba na tela o N-ésimo número Harmônico. 
 *	O computador deve sempre pedir para o usuário informar um novo valor de N, ou 0 para finalizar o programa.
 *
 *	Exigência, o cálculo do n-ésimo número harmônico deve ser realizado por uma função recursiva.
 *  Utilize a seguinte fórmula:
 *	Hn = (1/1) +(1/2) + ...+ (1/n)
 */

float num(float n){
    if (n==1){
        return 1;
    }
    else{
        return (1/n) + num(n-1);
    }
}
int main() {
    int x = 1;
    float n;
    while(x!=0){
        cout << "Digite um numero: " << endl;
        cin >> n;
        cout << "O N-esimo numero harmonico de " << n << " e = "  << num(n) << endl;
    cout << "\nDigite:" << endl << "1 - Para inserir outro numero." << endl << "0 - Para finalizar o programa." << endl;
    cin >> x;
    system("cls");
    }
    cout << "Fim do programa.";
    return 0;
}
