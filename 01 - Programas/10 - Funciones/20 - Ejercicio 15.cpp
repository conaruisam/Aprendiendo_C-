/*
   Ejercicio 15.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void mostrarMatriz1(int matriz[][3], int, int);
char comprobarMatrizSimetrica(int matriz[][3],int,int);

// Variables públicas.
int matriz[100], nFilas, nColumnas;



int main () {
	const int nFilas = 3;
	const int nColumnas = 3;
	
	int matriz[nFilas][nColumnas] = {{2,5,9},{5,8,-1},{9,-1,10}};
	
	
	mostrarMatriz1(matriz, nFilas,nColumnas);
	
	cout<<comprobarMatrizSimetrica(matriz, nFilas,nColumnas);

	getch();
	return 0;
}


// Definicion de funciones.


void mostrarMatriz1(int matriz[][3], int nFilas, int nColumnas) {
	
	
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
			cout<<"["<<matriz[f][c]<<"]";
		}
		cout<<"\n";
	}
}

char comprobarMatrizSimetrica(int matriz[][3],int nFilas,int nColumnas) {
	char flagSimetrica = 'V';
	for(int f=0;f<nFilas;f++) {
		for(int c=0;c<nColumnas;c++){
			if (matriz[f][c] != matriz[c][f]){
				flagSimetrica = 'F';
			}
		}
	}
 return flagSimetrica;	
}
