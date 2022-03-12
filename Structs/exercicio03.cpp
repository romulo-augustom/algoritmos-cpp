#include <iostream>
using namespace std;

/*
 *  Implemente um programa que possua uma struct denominada viagem, com os campos: distancia (float) e consumo(float).
 *	Crie uma fun��o denominada kmlitro que receba uma vari�vel do tipo viagem e retorne quantos quil�metros foram rodados por cada litro de combust�vel consumido.
 *  Ou seja, retorna o resultado da divis�o de distancia por consumo
 *
 *	Crie um vetor do tipo viagem (1000 posi��es). Fa�a o usu�rio preencher todos os dados de todas as posi��es do vetor
 *	Ao final, exiba tais dados na tela, inclusive o retorno da fun��o para cada uma das posi��es do vetor.
 */
 
struct viagem{
	float distancia;
	float consumo;
};

float kmlitro(float d, float c){
	float dc;
	dc = (d/c);
	return dc;
}

void result(viagem x){
    cout << "Distancia: " << x.distancia << "KM     Consumo: " << x.consumo << "L     Media de consumo: " << kmlitro(x.distancia,x.consumo) << "KM/L" << endl;
}

int main(){
    viagem x[1000];
    int i;
    for (i=0;i<1000;i++){
        cout << "Distancia percorrida (KM): " << endl;
        cin >> x[i].distancia;
        cout << "Consumo (L): " << endl;
        cin >> x[i].consumo;
        system ("cls");
    }
    for (i=0;i<1000;i++){
        result(x[i]);
    }
    return 0;
}
