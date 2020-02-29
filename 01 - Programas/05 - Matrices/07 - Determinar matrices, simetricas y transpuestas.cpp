/*
  Programa que determina si una matriz es simétrica o no,
  4 5       5 4
  6 7       7 6
*/ 


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){


// Definimos la matrices
int matriz1[100][100],filas, columnas;
int errores;

  
  cout<<"Indique el numero de filas que quiere: ";  cin>>filas;
  cout<<"Indique el numero de filas que quiere: ";  cin>>columnas;
  
  
for (int i = 0;i<filas;i++) {
	for (int a = 0;a<columnas;a++) {
		// Rellenamos la matriz
		cout<<"Digite un numero: ["<<i+1<<"]["<<a+1<<"]"<<" : ";
		cin>>matriz1[i][a];
	 
	}
}

// Comprobamos si es una matriz simetrica
 if(filas == columnas){

for (int i = 0;i<filas;i++) {
	for (int a = 0;a<columnas;a++) {

  // Comprobamos si es una matriz transpuesta
	   
					if(matriz1[i][a] == matriz1[a][i]){
        cout<<"|"<<matriz1[i][a]<<"|"<<endl;
		   } else {
		   	errores++;
		   }
       // cout<<"|"<<matriz1[i][a]<<"|";   	
		}
		cout<<"\n";	
 	}
 }

 if (filas == columnas)  {
 	cout<<"Es una matriz simetrica"<<endl;
 };
 if (errores != 0) {
 	cout<<"No es una matriz transpuesta";
 } else {
 	cout<<"Es una matriz transpuesta";
 }

 
	getch();
	return 0;
}

