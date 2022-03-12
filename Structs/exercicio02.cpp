#include <iostream>
using namespace std;

/*
 *  Crie um programa que possua uma função chamada calcuraArea.
 *	Ela deve receber como parâmetro uma variável do tipo Triângulo (struct com base e altura, ambos float) e retornara área desse Triângulo.
 *
 *	Crie 3 variáveis desse tipo e faça o usuário preencher todos esses valores.
 *	Exiba todos os dados, inclusive a área, do triângulo com maior área.
 */
 
struct triangulo{
    float base;
    float altura;
};
float calculaArea(float b, float h){
    float area;
	area = ((b*h/2));
    return area;
}

int main(){
    triangulo a;
    float area1;
    cout << "Digite a base do triangulo A: " << endl;
	cin >> a.base;
	cout << "Digite a altura do triangulo A: " << endl;
	cin >> a.altura;
	area1 = calculaArea(a.base,a.altura);
    
    triangulo b;
    float area2;
    cout << "\nDigite a base do triangulo B: " << endl;
	cin >> b.base;
	cout << "Digite a altura do triangulo B: " << endl;
	cin >> b.altura;
	area2 = calculaArea(b.base,b.altura);
	
    triangulo c;
    float area3;
	cout << "\nDigite a base do triangulo C: " << endl;
	cin >> c.base;
	cout << "Digite a altura do triangulo C: " << endl;
	cin >> c.altura;
	area3 = calculaArea(c.base,c.altura);
	system("cls");
	
	cout << "\nTriangulo A: " << endl <<"Base = " << a.base << "  Altura = " << a.altura << "  Area = " << area1 << endl;
    cout << "Triangulo B: " << endl <<"Base = " << b.base << "  Altura = " << b.altura << "  Area = " << area2 << endl;
    cout << "Triangulo C: " << endl <<"Base = " << c.base << "  Altura = " << c.altura << "  Area = " << area3 << endl;
    
    if (area1>area2 && area1>area3){
    cout << "\nO triangulo A tem a maior area." << endl;
    }
    if (area2>area1 && area2>area3){
        cout << "\nO triangulo B tem a maior area." << endl;
    }
    if (area3>area1 && area3>area2){
        cout << "\nO triangulo C tem a maior area." << endl;
    }
    if (area1==area2 && area1==area3){
        cout << "\nOs tres triangulos tem a mesma area.";
    }
    if (area1==area2){
        if(area1>area3){
            cout << "\nOs triangulos A e B tem areas iguais e maiores que do triangulo C." << endl;
        }
    }
    if (area1==area3){
        if(area1>area2){
            cout << "\nOs triangulos A e C tem areas iguais e maiores que do triangulo B." << endl;
        }
    }
    if (area2==area3){
        if(area2>area1){
            cout << "\nOs triangulos B e C tem areas iguais e maiores que do triangulo A." << endl;
        }
    }
	
	return 0;
}
