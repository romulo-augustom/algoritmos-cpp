#include <iostream>
using namespace std;

float serie(float n){
    if(n==1){
        return 2;
    }
    else{
        return ((1+(n*n))/n) + serie(n-1);
    }
}
int main() {
    int x = 1;
    float n;
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
