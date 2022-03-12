#include <iostream>
using namespace std;

int main (){
  int n, divisores=0, i;
  
  cout << "Digite um numero: "<<endl;
  cin >> n;
  
  if (n>0)
  {
    for (i=1;i<=n;i++)
    {
      if (n%i==0)
      divisores++;
    }
    
    if (divisores>2)
      cout << "O numero " <<n << " nao e primo." << endl;
    else
      cout << "O numero " << n << " e primo." << endl;
  }
  return 0;
}
