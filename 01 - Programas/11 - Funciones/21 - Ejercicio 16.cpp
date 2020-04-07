/*
   Ejercicio 16.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void pedirDatosMatriz();
void mostrarMatriz1(int matriz[][100],int,int);
// Busca el numero mayor de una fila en concreto de la matriz.
int  buscarMatriz(int matriz[][100],int);
// Variables públicas.
int matriz[100][100], nFilas, nColumnas;


int main () {
 int fila;
 pedirDatosMatriz();
 mostrarMatriz1(matriz, nFilas, nColumnas);
	// Busca el numero mayor de una fila en concreto de la matriz.
	cout<<"Introduzca la fila: ";
	 cin>>fila;
	 // Le resto 1 por que empieza por cero las matrices..
 cout<<"El numero menor es: "<<buscarMatriz(matriz,fila-1);
 
	getch();
	return 0;
}


// Definicion de funciones.
void pedirDatosMatriz() {
	matriz[100][100], nFilas, nColumnas;
	
	cout<<"Introduzca el numero de filas de la matriz: ";
	 cin>>nFilas;
	 
	cout<<"Introduzca el numero de columnas de la matriz: ";
	 cin>>nColumnas;
	 
	 for(int f=0;f<nFilas;f++){
	 	for(int c=0;c<nColumnas;c++){
	 		cout<<"Rellena la fila ["<<f<<"] y la columna ["<<c<<"]: ";
				 cin>>matriz[f][c];
	 	}
	 }
	 cout<<"\n";
}

void mostrarMatriz1(int matriz[][100], int nFilas, int nColumnas) {
	
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
		}
		cout<<"\n";
	}
}




int  buscarMatriz(int matriz[][100],int fila) {
 int aux = matriz[fila][0];
	
	
	for(int i= 0;i<nFilas;i++) {
		
		cout<<"["<<matriz[fila][i]<<"]";
		
		if (matriz[fila][i] < matriz[fila][i+1]) {
			aux = matriz[fila][i];
		}
	}
		
	
	
	return aux;
}





