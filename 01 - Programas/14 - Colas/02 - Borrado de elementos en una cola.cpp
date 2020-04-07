/*
    Colas - Borrado
*/ 


#include<iostream>
#include<conio.h>
#include<stdlib.h>


using namespace std;

struct Nodo {
	  int dato;
	  Nodo *siguiente;
};

// Prototipos de funcion

void insertarCola(Nodo *&, Nodo *&, int);
bool comprobarCola(Nodo *);
void borrarCola(Nodo *&, Nodo *&, int &);

int main() {
	
 // Se inicializan los punteros del inicio y el fin.
	Nodo *inicio = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<<"Introduce un numero: ";
	 cin>>dato;
	 
	insertarCola(inicio, fin, dato);

	cout<<"Introduce un numero: ";
	 cin>>dato;
	 
	insertarCola(inicio, fin, dato);

	cout<<"Introduce un numero: ";
	 cin>>dato;
	 
	insertarCola(inicio, fin, dato);
 
	cout<<"\nBorrando los elementos de la cola: "<<endl;
 
	while (inicio != NULL) { 
 	    borrarCola(inicio, fin, dato);
 	    
 	    if(inicio != NULL){ // Si aun 
 	    	  cout<<dato<<" , ";
 	    } else {
 	    	  cout<<dato<<" . ";
 	    }
	}
	
	getch();
	return 0;
}


// Funcion para insertar elementos en una cola.

void insertarCola(Nodo *& inicio, Nodo *&fin, int dato) {
	
	   Nodo *nuevo_nodo = new Nodo();
	   
	   nuevo_nodo->dato = dato;
	   nuevo_nodo->siguiente = NULL;
	   
	   if(comprobarCola(inicio)) {
	   	inicio = nuevo_nodo;
	   } else {
	   	fin->siguiente = nuevo_nodo;
	   }	
    fin = nuevo_nodo;   
    
    cout<<"\tElemento "<<dato<<" insertado correctamente a la cola\n";
}


// Funcion para determinar si la cola esta vacia.
bool comprobarCola(Nodo *inicio) {
	// return (inicio == NULL)? true : false; 
	
	if(inicio == NULL) {
		return true;
	} else {
	 return false;
	}
}


void borrarCola(Nodo *&inicio, Nodo *&fin, int &n) {
	n = inicio->dato; 
	Nodo *aux = inicio; // Creamos una variable auxiliar para utilizar a borrar la memoria.
	
	if(inicio == fin) { // Si el inicio es igual al final es que no habría más en la cola y abría que borrar el inicio y el fin, sino el inicio de la cola 
		inicio = NULL;
		fin = NULL;
	} else {
		inicio = inicio->siguiente;
	}
	
	delete aux; // Borrar de la memoria.
}
