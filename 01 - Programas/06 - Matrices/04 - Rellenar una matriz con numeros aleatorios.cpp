/*
  Copiar de una matriz a otra
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
// Definimos la matrices
int matriz1[3][3] = {};
int matriz2[100][100] = {};

int filas = 0, columnas = 0;



	cout<<"Por favor indique el numero de filas que quiere que tenga la matriz: ";
	cin>>filas;

	cout<<"Por favor indique el numero de columnas que quiere que tenga la matriz: ";
	cin>>columnas;
	
 // Genera los segundos
	srand(time(NULL));
  
for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {

	    matriz1[i][a]  = 1 + rand() %(100);
     //cout<<"|"<<matriz1[i][a]<<"|";   	
      matriz2[i][a] = matriz1[i][a]; 	
					 // RELLENAMOS LA SEGUNDA MATRIZ..
					
	}
}


for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   // Pintamos la segunda matriz...
		   
        cout<<"|"<<matriz2[i][a]<<"|";   	
	}
	cout<<"\n";	
}

 
getch();
return 0;
}


