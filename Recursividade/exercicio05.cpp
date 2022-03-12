#include <iostream>
using namespace std;

/*
 *  Crie um programa semelhante ao anterior (com função recursiva). 
 *	No entanto o computador deve exibir o N-ésimo número da série de Fibonacci.
 *
 *	Tal série possui seus dois primeiro números com valor 1.
 *  Os demais são iguais à soma de seus dois antecessores imediatos.
 *	Ex: 1 1 2 3 5 8 13 21 34 . . .
 */

int fibonacci(int n){
    if (n<2){
        return n;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int x = 1;
    int n;
    while(x!=0){
        cout << "Digite um numero: " << endl;
        cin >> n;
        cout << "O termo " << n << " na sequencia de Fibonacci e = "  << fibonacci(n) << endl;
    cout << "\nDigite:" << endl << "1 - Para inserir outro numero." << endl << "0 - Para finalizar o programa." << endl;
    cin >> x;
    system("cls");
    }
    cout << "Fim do programa.";
    return 0;
}
