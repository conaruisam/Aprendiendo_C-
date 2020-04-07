/*
  Insertar nodos en una lista.
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};
// Prototipo de funcion.

void insertarLista(Nodo *&, int);



int main() {
 Nodo *lista = NULL; // Primer paso - Inicializar la lista.
 int dato;
 
 cout<<"Introduce un numero: ";
  cin>>dato;
  
 insertarLista(lista, dato);

 cout<<"Introduce un numero: ";
  cin>>dato;
  
 insertarLista(lista, dato);
	getch();
	return 0;
}

void insertarLista(Nodo *&lista ,int n){
	
	Nodo *nuevo_nodo = new Nodo(); // Segundo paso - reservar memoria siempre apra un nuevo nodo.
	nuevo_nodo->dato = n;         // y asignar al nuevo nodo la entrada a la funcion.
	
	Nodo *aux1 = lista;   // Tercer paso - Creamos dos variables auxiliares, para poder rellenar la lista de forma ordenada.
	Nodo *aux2;
	
	// Este while es para comprobar si tiene que ir delante  o detrás del nodo, para así ir ordenado.
	while((aux1 != NULL) &&(aux1->dato < n)) {
		aux2 = aux1;
		aux1 = aux1->siguiente;		
	}
	
	if(lista == aux1) { // Cuarto paso - si la lista es igual a nuestro primer auxiliar entonces irá antes, sino despues
		lista = nuevo_nodo;
	} else {
		aux2->siguiente = nuevo_nodo;		
	}
	
	nuevo_nodo->siguiente = aux1;
	
	cout<<"\tElemento: "<<n<<" ha sido insertado"<<endl;
}
