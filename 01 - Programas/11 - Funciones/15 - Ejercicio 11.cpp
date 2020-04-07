/*
   Ejercicio 11.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

int sumaArray(int sumaEnteros[],int); 
void mostrarDatosArray(int array[],int);


int main () {
	// Defino la constante del tamaño del array.
 const int Longi = 5;
	int array[Longi]	= {1,2,3,4,5};
	
	// Llamamos a la funcion que suma los enteros del array.
	cout<<"La suma del array es: "<<sumaArray(array,Longi)<<endl;
	
	

	getch();
	return 0;
}


// Definicion funcion.
int sumaArray(int sumaEnteros[],int tama) {
	int sumaTotal;
	
	for(int i=0;i<tama;i++) {
		sumaTotal += sumaEnteros[i];
	}	
	
	return sumaTotal;
}


	
