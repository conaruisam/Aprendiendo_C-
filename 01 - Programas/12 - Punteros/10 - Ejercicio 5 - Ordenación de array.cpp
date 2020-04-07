/*
   Ordenacion de array.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // Para que funciona el new y el delete.

using namespace std;

// Prototipo de funcion
void pedirDatos();
void ordenarArray(int *, int);
void mostrarDatos(int *, int);

int nElementos, *elemento;

int main() {
				
				pedirDatos();
				ordenarArray(elemento, nElementos);
				mostrarDatos(elemento, nElementos);
				
				delete[] elemento; // Liberar el array.
				
	   getch();
  	 return 0;
}

void pedirDatos() {
	cout<<"Introduzca el numero de elementos del array: ";
	 cin>>nElementos;
	 
	 elemento = new int[nElementos];
	 
	 for (int i=0;i<nElementos;i++){
	 	cout<<"Introduzca un numero ["<<i<<"] : ";
	 	 cin>>*(elemento+i); // Es lo mismo que elemento[i];
	 }
}

// Método burbuja

void ordenarArray(int *elemento, int nElementos) {
	int aux;
	
	for(int i=0;i<nElementos;i++) {
		for(int j=0;j<nElementos-1;j++) {
			  if(*(elemento+j) > *(elemento+j+1)) {
			  	
						aux = *(elemento+j);
			  	*(elemento+j) = *(elemento+j+1);
			  	*(elemento+j+1) = aux;
			  }
		}
	}
	
}


void mostrarDatos (int *elemento, int nElementos) {
	cout<<endl<<"Mostrando array ordenado: ";
	
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" , "; // Es lo mismo que elemento[i]
	}
	
}
