/*
   Matriz dinamica
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // new y delete

using namespace std;

// Prototipos
void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nColumnas;  // Puntero matriz.


int main() {
	   
	   pedirDatos();
	   mostrarMatriz(puntero_matriz, nFilas, nColumnas);
	   // Liberar la memoria de la matriz dinámica
	   for(int i=0;i<nFilas;i++){
	   	delete[] puntero_matriz[i]; // Liberar las columnas
	   }
	  
	   delete[] puntero_matriz; // Liberar las filas.
	   
	   getch();
	   return 0;
}


void pedirDatos() {
	
     cout<<"Introduce el numero de filas: ";
					 cin>>nFilas;
						
     cout<<"Introduce el numero de columnas: ";
					 cin>>nColumnas;
							
					puntero_matriz = new int*[nFilas]; // Reservando memoria para las filas.
					for(int i=0;i<nFilas;i++){
						puntero_matriz[i] = new int[nColumnas]; // Reservando memoria para las columnas.
					}
					
					for(int i=0;i<nFilas;i++) {
						for(int j=0;j<nColumnas;j++){
							cout<<"Introduzca un numero["<<i<<"]"<<j<<"]: ";
							 cin>>*(*(puntero_matriz+i)+j); // Es lo mismo que puntero_matriz[i][j], pero con punteros.
						}
					}
}


void mostrarMatriz(int **puntero_Matriz, int nFilas, int nColumnas) {
	
	cout<<"\n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
