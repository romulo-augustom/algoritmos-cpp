#include <iostream>
using namespace std;

int main (){
    int n, ni;
    long long fat=1;

    cout << "Digite o número que deseja calcular seu fatorial: " << endl;
    cin >> n;

    ni=n;

    while (n>0){
        fat*=n;
        n--;
    }

    cout << ni << "!" << " = " << fat << endl;   

    return 0;       
}
