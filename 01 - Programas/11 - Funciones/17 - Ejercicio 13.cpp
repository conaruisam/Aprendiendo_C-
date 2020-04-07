/*
   Ejercicio 13.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void pedirDatos();
void cambiarSigno(int array[],int);
void mostrarDatos();


int array[100], longitudArray;

int main () {
	// Rellenamos la entrada
	pedirDatos();
	// Cambiamos su signo
	cambiarSigno(array,longitudArray);
 // Y lo enseñamos
 mostrarDatos();
 
	getch();
	return 0;
}


// Definicion de funciones.


void pedirDatos() {
	
	cout<<"Indique la longitud del array";
	 cin>>longitudArray;
	
	for(int i=0;i<longitudArray;i++) {
		cout<<i+1<<" Introduce el primer digito array: ";
		 cin>>array[i];
	}
}

void cambiarSigno(int array[],int longitud) {
	
	for(int i=0;i<longitud;i++) {
		 array[i] *= -1;
	}	
}

void mostrarDatos() {
	
	for (int i=0;i<longitudArray;i++) {
		
		cout<<" "<<array[i]<<endl;
	}
}
