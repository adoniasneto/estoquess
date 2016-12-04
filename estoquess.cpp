
#ifndef estoquecontrole
#define estoquecontrole

class cestoque {
         
         private: 
         int estoque; 
         int cod_produto[7];
		 int qtd_estoque;
		 float preco_unit;
		 char nome_produto;
		 int cod_cliente [6]; 
		 
		 public: 
		 cestoque();
		
		void valores (int, int); 
		void cod_cliente();
		void cod_prod_desejado();
		void qtd_desejada(); 
		    
};

#endif


#include <iostream>
#include <cmath>

using namespace std; 

#include "estoquecontrole.h"

cestoque::cestoque(){

int estoque=0;
int qtd_estoque= 0;
float preco_unit= 0;

for(int i=0; i<7; i++){
    cod_produto[i]= 0;
    cod_cliente [i]= 0;
}
}

void cestoque::valores(int a, int b){
    
    cod_produto[0]= a;
    cod_cliente[0]= b;

}

void cestoque::cod_prod_desejado()	{
    int produtos[7];
    for(int i=0; i<7;i++)
    produtos [i]= produtos [i];
cout<< "digite o codigo do produto desejado: "<< produtos [i] <<endl;

}
	
void cestoque::qtd_desejada(){
	cout<<"digite a quantidade desejada de produtos do estoque: "<< endl;
}	

void cestoque::cod_cliente(){
	
	int clientes[6];
	for (int i=0; i<6; i++){
	clientes [i]= clientes [i];
	cout<< "digite o codigo do cliente: "<< clientes [i]<< endl;
}
}	

#include <iostream>	
#include <cmath>

#include "estoquecontrole.h"

using namespace std; 
int main() {

int a,b;
int x=1;

cout<< "Grupo: Adonias Alencar de Azevedo neto\n Joselito Lima \n Samuel Robson"<< endl;
cout<< "Disciplina: Linguagem de Programacao"<<endl;
cout<< "Curso: Engenharia Eletrica"<<endl;
cout<< "projeto sobre controle de estoque"<<endl;

while(x == 1){
cout<< "---------------------------------CONTROLE DE ESTOQUE-----------------------------------------"<<endl; 
cout<< "para iniciar o programa digite o numero 1 e aperte enter:  "<<endl;
cin>> x ;

cestoque estoque; 

cout<< "entre com o codigo do cliente: " << endl;
cin>> b;
cout<< "entre com o codigo do produto: "<< endl;
cin>> a;

estoque.valores(a,b);

int tipo; 

cout<< "digite o que deseja"<<endl;
cout<< "1- quantidade de produtos "<<endl;
cout<< "2- codigo do produto desejado "<<endl;
cout<< "3- produtos em falta "<<endl;

cin>>tipo;

if(tipo>3){
	while (tipo>6){
	cout<< "opcao invalida, por gentileza digite novamente: "<<endl;
    cin>>tipo;
	}
}

if(tipo == 1){
estoque.qtd_desejada();
}
if(tipo == 2){
estoque.cod_prod_desejado()
}


cout<< "digite 1 para repetir ou 7 para sair: "<<endl;
cin>> x;



}
return 0;
}
