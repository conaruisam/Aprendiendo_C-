/*
   Paso de parámetros de tipo array.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void cuadrado(int array[],int); 
void mostrarDatosArray(int array20[],int);

int main () {
	// Defino la constante del tamaño del array.
 const int TAM = 5;
	int array[TAM]	= {1,2,3,4,5};
	
	// Calculamos el cuadrado del array.
	cuadrado(array,TAM);
	
	// MOSTRAR DATOS.
	
	mostrarDatosArray(array,TAM);
	
	

	getch();
	return 0;
}

void cuadrado(int array[],int tama) {
	
	for(int i=0;i<tama;i++) {
		array[i] *=array[i];
	}	
	
}


void mostrarDatosArray(int array20[],int tama) {

	for (int i=0;i<tama;i++){
		cout<<array20[i]<<endl;
	}	

}


	
