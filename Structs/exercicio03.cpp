#include <iostream>
using namespace std;

/*
 *  Implemente um programa que possua uma struct denominada viagem, com os campos: distancia (float) e consumo(float).
 *	Crie uma função denominada kmlitro que receba uma variável do tipo viagem e retorne quantos quilômetros foram rodados por cada litro de combustível consumido.
 *  Ou seja, retorna o resultado da divisão de distancia por consumo
 *
 *	Crie um vetor do tipo viagem (1000 posições). Faça o usuário preencher todos os dados de todas as posições do vetor
 *	Ao final, exiba tais dados na tela, inclusive o retorno da função para cada uma das posições do vetor.
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
