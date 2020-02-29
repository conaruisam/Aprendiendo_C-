/*
  Programa que rellena una matriz
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

char matriz1[100][100];

int filas = 0, columnas = 0;



	cout<<"Por favor indique el numero de filas que quiere que tenga la matriz: ";
	cin>>filas;

	cout<<"Por favor indique el numero de columnas que quiere que tenga la matriz: ";
	cin>>columnas;


// cout<<"Filas: "<<filas<<endl<<"Columnas: "<<columnas<<endl;

for (int i = 0;i<filas;i++) {
	for (int a = 0;a<columnas;a++) {
		cout<<"Digite un numero: ["<<i+1<<"]["<<a+1<<"]"<<" : ";
		cin>>matriz1[i][a];
		
 }
}



for (int i = 0;i<filas;i++) {
	for (int a = 0;a<columnas;a++) {

		cout<<"|"<<matriz1[i][a]<<"|";
		
	}
 cout<<"\n";
};


system("pause");
return 0;
}


