/*
  Busqueda en un array con punteros.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // Para que funciona el new y el delete.

using namespace std;

// Prototipo de funcion
void pedirDatos();
int busquedaArray(int *, int);
void mostrarDatos(int);

int nElementos, *array;
int nABuscar;

int main() {
				int posicionNumero;
				pedirDatos();
				posicionNumero = busquedaArray(array, nABuscar);
				mostrarDatos(posicionNumero);
				
				delete[] array; // Liberar el array.
				
	   getch();
  	 return 0;
}

void pedirDatos() {
	cout<<"Introduzca el numero de elementos del array: ";
	 cin>>nElementos;
	 
	 array = new int[nElementos];
	 
	 for (int i=0;i<nElementos;i++){
	 	cout<<"Introduzca un numero ["<<i<<"] : ";
	 	 cin>>*(array+i); // Es lo mismo que elemento[i];
	 }
	 
	 cout<<"Introduce el numero a buscar";
	  cin>>nABuscar;
}

int busquedaArray(int *array, int numeroAbuscar) {
	int posicionNumero;
	
	char flag = 'F';
	int i=0;
	while (flag == 'F' and i<nElementos) {
		if(numeroAbuscar == *array){
			posicionNumero = i;
			flag = 'V';
		}
		
		array++;
		i++;
	}	
	return posicionNumero;
}


void mostrarDatos (int posicionNumero) {
	
	 cout<<endl<<"Mostrando la posicion del numero: ";
	
		cout<<"LA POSICION DEL NUMERO ES ["<<posicionNumero<<"] : "<<*(array+posicionNumero); // Es lo mismo que elemento[i]
	
}
