/*
   Funcion matrices.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void mostrarMatriz1(int matriz[][2], int, int);
void mostrarMatrizCuadrada(int matriz[][2],int,int);

// Variables públicas.
int matriz[100], nFilas, nColumnas;



int main () {
	const int nFilas = 3;
	const int nColumnas = 2;
	
	int matriz[nFilas][nColumnas] = {{1,2},{3,4},{5,6}};
	
	mostrarMatriz1(matriz, nFilas,nColumnas);
	
	mostrarMatrizCuadrada(matriz, nFilas,nColumnas);

	getch();
	return 0;
}


// Definicion de funciones.


void mostrarMatriz1(int matriz[][2], int nFilas, int nColumnas) {
	
	
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
			cout<<"["<<matriz[f][c]<<"]";
		}
		cout<<"\n";
	}
}

void mostrarMatrizCuadrada(int matriz[][2],int nFilas,int nColumnas) {
	cout<<endl;
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
			matriz[f][c] *= matriz[f][c];
		}
	}
	
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
			cout<<"["<<matriz[f][c]<<"]";
		}
		cout<<"\n";
	}	
}
