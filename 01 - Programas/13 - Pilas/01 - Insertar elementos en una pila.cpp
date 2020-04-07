/*
   Insertar elementos en una pila
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>  // New 

using namespace std;
	
struct Nodo{
	  int dato;
	  Nodo *siguiente; // Reservamos el espacio en memoria para el siguiente nodo.
};

void agregarPila(Nodo *&, int);

int main() {
    Nodo *pila = NULL;
    
    int n1, n2;
    
    cout<<"\nIntroduce un numero: ";
     cin>>n1;
    
    agregarPila(pila, n1);

    cout<<"\nIntroduce un numero: ";
     cin>>n2;

    agregarPila(pila, n2);

					    
	   getch();
	   return 0;
}


void agregarPila(Nodo *&pila, int n){
	  Nodo *nuevo_nodo = new Nodo();  // Reservar memoria para el nodo
	  nuevo_nodo->dato = n;           // Cargar el numero.
	  nuevo_nodo->siguiente = pila;   // Preparar para el NULL, para el siguiente dato
	  pila = nuevo_nodo;              // Reservar el siguiente dato.
	  
	  cout<<"\nSe ha agregado "<<n<<" a la pila correctamente"<<endl;
	
}
