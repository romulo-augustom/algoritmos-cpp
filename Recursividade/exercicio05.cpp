#include <iostream>
using namespace std;

/*
 *  Crie um programa semelhante ao anterior (com fun��o recursiva). 
 *	No entanto o computador deve exibir o N-�simo n�mero da s�rie de Fibonacci.
 *
 *	Tal s�rie possui seus dois primeiro n�meros com valor 1.
 *  Os demais s�o iguais � soma de seus dois antecessores imediatos.
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
