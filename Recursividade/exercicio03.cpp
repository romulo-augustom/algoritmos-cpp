#include <iostream>
using namespace std;

/*
 *  Escreva uma função recursiva, potencia(x,y), que devolva x elevado a potência y.
 */

int potencia(int x, int y){
    if (y==0){
        return 1;
    }
    else{
        return x * potencia (x, y-1);
    }
}
int main(){
    int x, y;
    cout << "Digite o valor da base: " <<endl;
    cin >> x;
    cout << "Digite o valor do expoente: " <<endl;
    cin >> y;
    cout << "O resultado e = " << potencia(x,y);
 	return 0;
}
