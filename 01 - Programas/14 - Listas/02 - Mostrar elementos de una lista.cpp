/*
  Mostrar nodos de una lista.
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
void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);

Nodo *lista = NULL; // Primer paso - Inicializar la lista.

int main() {
  
 menu();
 
	getch();
	return 0;
}

void menu(){
	int opcion, dato;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Salir";
		cout<<"\nOPCION: ";
		 cin>>opcion;
		 
		 switch(opcion) {
		 	case 1:
    cout<<"Introduce un numero: ";
     cin>>dato;
  
    insertarLista(lista, dato);
		 		
		 		break;
		 	case 2:
    cout<<"\nMostrando los elementos de una lista";
    mostrarLista(lista);		 	
				system("pause")	;
				 break;    
		 	case 3:
		 		break;
		 			
		 }
		 system("cls");
	} while (opcion != 3);
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


void mostrarLista(Nodo *lista) {
	
	Nodo *actual = new Nodo(); // Primer paso crear un nodo auxiliar (que realmente será el que se muestre)
	actual = lista;
	cout<<endl;
	
	while(actual != NULL){
		cout<<actual->dato<<" -> "; // Y con ayuda del nodo auxiliar vamos haciendo el bucle hasta que sea null, pasando cada dato al nodo siguiente...
		actual = actual->siguiente;
	}
	cout<<endl;
}
