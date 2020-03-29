/*
    Colas - Inserccion
*/ 


#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

struct Nodo {
	  char dato;
	  Nodo *siguiente;
};

// Prototipos de funcion

void insertarCola(Nodo *&, Nodo *&, char);
bool comprobarCola(Nodo *);

int main() {
	
 // Se inicializan los punteros del frente y el fin.
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	char dato[100];
	
	cout<<"Introduce una letra: ";
	 gets(dato);
	 
	insertarCola(frente, fin, dato[0]);
	 
	getch();
	return 0;
}


// Funcion para insertar elementos en una cola.

void insertarCola(Nodo *& inicio, Nodo *&fin, char n) {
	
	   Nodo *nuevo_nodo = new Nodo();
	   
	   nuevo_nodo->dato = n;
	   nuevo_nodo->siguiente = NULL;
	   
	   if(comprobarCola(inicio)) {
	   	inicio = nuevo_nodo;
	   } else {
	   	fin->siguiente = nuevo_nodo;
	   }	
    fin = nuevo_nodo;   
    
    cout<<"\tElemento "<<n<<" insertado correctamente a la cola\n";
}


// Funcion para determinar si la cola esta vacia.
bool comprobarCola(Nodo *frente) {
	// return (frente == NULL)? true : false; 
	
	if(frente == NULL) {
		return true;
	} else {
	 return false;
	}
}
