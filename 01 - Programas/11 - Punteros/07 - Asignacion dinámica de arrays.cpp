/*
   Asignación dinámica de arrays.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // Funciona el new and delete.

using namespace std;

// Prototipo de la funcion

void pedirNotas();
void mostrarNotas();

// Variable publica
int nExamenes, *notas;

int main() {
	
	  pedirNotas();
	  mostrarNotas();
	  
	  delete[] notas; // Liberar el espacio en memoria.
	  
	  getch();
  	return 0;
}


void pedirNotas() {
	
	cout<<"Introduzca el numero examenes realizados: ";
	 cin>>nExamenes;
	 
	 // Declaramos un nuevo array.
	 notas = new int[nExamenes]; // Creamos el array dinámico
	 
	 for(int i=0;i<nExamenes;i++){
	 	cout<<"Introduzca una nota: ";
	 	 cin>>notas[i];
	 }
}


void mostrarNotas() {
	cout<<"\nMostrando notas del usuario:\n";
	
	for(int i=0;i<nExamenes;i++){
		cout<<notas[i]<<endl;
	}
}
