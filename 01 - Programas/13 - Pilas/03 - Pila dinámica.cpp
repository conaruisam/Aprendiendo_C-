/*
   Quitar elementos en una pila
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>  // Delete 

using namespace std;
	
struct Nodo{
	  int dato;
	  Nodo *siguiente; // Reservamos el espacio en memoria para el siguiente nodo.
};

// Prototipo de funcion.

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main() {
    Nodo *pila = NULL;
    
    int dato; // Entrada pila.
    char rpt;
    do {

    cout<<"\nIntroduce un numero: ";
     cin>>dato;
     
    agregarPila(pila, dato);
    	
    	cout<<"\Desea agregar mas elementos a la pila(s/n)";
    	 cin>>rpt;
    	 
    } while((rpt=='S')||(rpt=='s'));

    cout<<"\nSacando los elementos de la pila: ";
    
    while(pila != NULL) { // Mientras no sea el final de la pila.
    	
    	sacarPila(pila, dato);
					
					if(pila != NULL){
					   cout<<dato<<", ";
					} else {
						  cout<<dato<<".";
					}
						
    	
    }
	   getch();
	   return 0;
}


void agregarPila(Nodo *&pila, int n){
	
	  Nodo *nuevo_nodo = new Nodo();  // Reservar memoria para el nodo
	  nuevo_nodo->dato = n;           // Cargar el numero.
	  nuevo_nodo->siguiente = pila;   // Preparar para el NULL, para el siguiente dato
	  pila = nuevo_nodo;              // Asignar el nuevo nodo a la pila..
	  
	  cout<<"\tSe ha agregado "<<n<<" a la pila correctamente"<<endl;
	
}


void sacarPila(Nodo *&pila, int &n) {
	  Nodo *aux = pila;         // Guardamos en un auxiliar el elemento de la pila;
	  n = aux->dato;            // Preparamos el numero a borrar..
	  pila = aux->siguiente;    // Ponemos que la pila equivalga al siguiente nodo. (por que vamos a borrar el anterior...)
	  delete aux;               // Borramos de la memoria el último numero
	
}
