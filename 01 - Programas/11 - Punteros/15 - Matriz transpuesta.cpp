/*
   Matriz transpuesta
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // new y delete

using namespace std;

// Prototipos
void pedirDatos();
void mostrarMatriz(int **, int, int);
void liberarMemoria(int);

int **puntero_matriz, nFilas, nColumnas;  // Puntero matriz.


int main() {
	
	   // Pedimos los datos de las primeras matrices
	   pedirDatos();
				// Mostramos las matrices.
	   mostrarMatriz(puntero_matriz, nFilas, nColumnas);
	   // Y por ultimo liberamos espacio de la memoria de las matrices
	   liberarMemoria(nFilas);
	  
	   getch();
	   return 0; 
}


void pedirDatos() {
	
     cout<<"Introduce el numero de filas: ";
					 cin>>nFilas;
						
     cout<<"Introduce el numero de columnas: ";
					 cin>>nColumnas;
						// PRIMERA MATRIZ....	
     
					cout<<"\nDATOS DE LA PRIMERA MATRIZ"<<endl;						
     
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


void mostrarMatriz(int **punteroMatriz, int nFilas, int nColumnas) {

 // MATRIZ NORMAL.
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" | ";
		}
		cout<<"\n";
	}
		cout<<"\n";
		
	// MATRIZ TRANSPUESTA	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nColumnas;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" | ";
		}
		cout<<"\n";
	 }
		
}




void liberarMemoria(int) {
	
	   for(int i=0;i<nFilas;i++){
	   	delete[] puntero_matriz[i]; // Liberar las columnas
	   }
	  
	   delete[] puntero_matriz; // Liberar las filas.
	
}
