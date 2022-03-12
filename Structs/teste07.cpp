#include <iostream>
#include <string.h>
using namespace std;

struct Projeto{
	char nome[20];
	int horastrabalhadas;
	float valorhora;
};

float valorProjeto(int ht, float vh){
	return ht * vh;
}

void result(Projeto x){
	cout << "Nome: " << x.nome << "\nHoras trabalhadas: " << x.horastrabalhadas << "\nValor por hora: " << x.valorhora << "\nValor total: " << valorProjeto(x.horastrabalhadas,x.valorhora) << "\n" << endl;
}

int main(){
	Projeto x[999];
	int op=0;
	int qtd=0;
	int cont=0;
	int y=0;
	int i=0;
	int j=0;
	cout << " | Menu |\n 1 - Inserir um projeto\n 2 - Exibir dados de um projeto\n 3 - Listar todos os dados dos projetos\n 4 - Sair \n" << endl;
	cin >> op;
	system ("cls");
	while(op!=4){
		if(op==1){
		    if(qtd==1){
                cont++;
		    }
		    qtd=1;
			for (cont; cont<100; cont++){
				cout << "Digite o nome do projeto: ";
				cin >> x[cont].nome;
				cout << "Digite o numero de horas trabalhadas: ";
				cin >> x[cont].horastrabalhadas;
				cout << "Digite o valor pago por hora: ";
				cin >> x[cont].valorhora;
				system ("cls");
				cout << "Digite: " << "\n1 - Para inserir um novo projeto. " << "\n0 - Para exibir o menu. " << endl;
				cin >> y;
				system ("cls");
				if (y==0){
					break;
				}
			}
		}
		if(op==2){
			cout << "Digite o nome do projeto que deseja exibir os dados: ";
			char n[20];
			cin >> n;
			for (i; i<=cont; i++){
				 if(strcmp(x[i].nome, n)==0){
					cout << "\n| Projeto |" << endl;
                    result(x[i]);
                    system ("pause");
            	}
			}
		system ("cls");
		}
		if(op==3){
			int j;
			for(j=0; j<=cont; j++){
				cout << "\n| Projetos |" << endl;
				result(x[j]);
			}
		}
		cout << " | Menu |\n 1 - Inserir um projeto\n 2 - Exibir dados de um projeto\n 3 - Listar todos os dados dos projetos\n 4 - Sair \n" << endl;
		cin >> op;
		system ("cls");
	}
	cout << "Fim do programa" << endl;
}
