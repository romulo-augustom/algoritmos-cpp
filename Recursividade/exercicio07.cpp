#include <iostream>
using namespace std;

double serie(double n){
    if(n==1){
        return 0.5;
    }
    else{
        return (((n*n)+1)/(n+3)) + serie(n-1);
    }
}
int main() {
    int x = 1;
    double n;
    while(x!=0){
        cout << "Digite um numero: " << endl;
        cin >> n;
        cout << "O resultado da serie S e = "  << serie(n) << endl;
    cout << "\nDigite:" << endl << "1 - Para inserir outro numero." << endl << "0 - Para finalizar o programa." << endl;
    cin >> x;
    system("cls");
    }
    cout << "Fim do programa.";
    return 0;
}
