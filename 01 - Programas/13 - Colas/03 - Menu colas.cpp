/*
    Menú - Colas.
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
void menu();
void insertarCola(Nodo *&, Nodo *&, char);
bool comprobarCola(Nodo *);
void borrarCola(Nodo *&, Nodo *&, char &);

int main() {
	
 menu();
 
	getch();
	return 0;
}


void menu() {
	int opcion;
	char dato;
	
	Nodo *inicio = NULL;
	Nodo *fin = NULL;

	do {
	   cout<<"\t -- MENU -- \n";
	   cout<<"1. Insertar un caracter en la cola"<<endl;
	   cout<<"2. Mostrar los elementos de la cola / Borrarlos"<<endl;
	   cout<<"3. Salir"<<endl;
	   
	   cin>>opcion;
	   
	   switch(opcion){
	   	 case 1: cout<<"\nIntroduzca el caracter a ingresar: ";
	   	         cin>>dato;
	   	 	       insertarCola(inicio,fin,dato);
	   	 	break;
	   	 case 2: cout<<"\nMostrando los elementos de la cola: "<<endl;
	   	 	       while (inicio != NULL) {
	   	 	       	 borrarCola(inicio,fin,dato);
	   	 	       	 if (inicio != NULL) {
	   	 	       	 	cout<<dato<<", ";
	   	 	       	 } else {
	   	 	       	 	cout<<dato<<"."<<endl;
	   	 	       	 }
	   	 	       }
	   	 	  system("pause");
	   	 	break;
//    SALIR DEL PROGRAMA
	   	 case 3:
	   	 	break;
	   }
	  system("cls");
	} while (opcion !=3);
	
}

// Funcion para insertar elementos en una cola.

void insertarCola(Nodo *& inicio, Nodo *&fin, char dato) {
	
	   Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria para un nuevo nodo.
	   
	   nuevo_nodo->dato = dato;      // Ingresamos la entrada al nuevo nodo.
	   nuevo_nodo->siguiente = NULL; 
	   
	   if(comprobarCola(inicio)) { // Si es el primer nodo de la cola pues obviamente llenamos el fin, sino el inicio.
	   	inicio = nuevo_nodo;
	   } else {
	   	fin->siguiente = nuevo_nodo;
	   }	
    fin = nuevo_nodo;   
    
    cout<<"\n\tElemento "<<dato<<" insertado correctamente a la cola\n";
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


void borrarCola(Nodo *&inicio, Nodo *&fin, char &dato) {
	dato = inicio->dato; // El datoq ue vamos a borrar. 
	Nodo *aux = inicio; // Creamos una variable auxiliar para utilizar a borrar la memoria.
	
	if(inicio == fin) { // Si el inicio es igual al final es que no habría más en la cola y habría que borrar el inicio y el fin, sino el inicio de la cola 
		inicio = NULL;
		fin = NULL;
	} else {
		inicio = inicio->siguiente;
	}
	
	delete aux; // Borrar de la memoria.
}
