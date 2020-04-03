/*
  Buscar elemento en una lista
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

// Prototipos de funcion.

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void elementoMayorMenor(Nodo *);
void sumaYpromedioListas(Nodo *);

Nodo *lista = NULL; // Primer paso - Inicializar la lista, variable publica.

int main() {
  
 int  dato;
 char resp = 'S';
 
 do {
 	cout<<"Introduzca un dato para la lista: ";
 	 cin>>dato;
			 
	 insertarLista(lista, dato);	 
	 
	 cout<<"¿Desea introducir mas datos a la lista?(s/n)";
	  cin>>resp;
	  
 } while (resp == 'S' || resp == 's');
 
 
  
 mostrarLista(lista);		 
 // Funcion que determina el elemento mayor y el elemento menor.
 elementoMayorMenor(lista);
 sumaYpromedioListas(lista);
 
 
	getch();
	return 0;
}



// -- FUNCIONES -- 

void insertarLista(Nodo *&lista ,int n){
	
	Nodo *nuevo_nodo = new Nodo(); // Segundo paso - reservar memoria siempre para un nuevo nodo.
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

void elementoMayorMenor(Nodo *lista) {
	int Mayor,Menor;
	
	Nodo *aux = new Nodo(); // Primer paso crear un nodo auxiliar (que realmente será el que utilicemos para buscar el mayor o el menor)
	aux = lista;
	
	Mayor = aux->dato;
	Menor = aux->dato;
	
	
	while(aux != NULL){
		
		if(aux->dato > Mayor){
			Mayor = aux->dato; // Recorremos al lista y si lo encuentra el dato pues activamos el flag.
		} else if (aux->dato < Menor) {
			Menor = aux->dato;
		}
		
		aux = aux->siguiente;
	}
	cout<<"El dato mayor es: "<<Mayor<<endl;
	cout<<"El dato menor es: "<<Menor<<endl;
	
	cout<<endl;
}


void sumaYpromedioListas(Nodo *lista) {
	int suma = 0, promedio = 0, contador = 0;
	
	
	Nodo *aux = new Nodo(); // Primer paso crear un nodo auxiliar (que realmente será el que utilicemos para buscar el mayor o el menor)
	aux = lista;
	
	
	while(aux != NULL){
		if (aux->dato != NULL) {
		suma += aux->dato;
		contador++;			
		}
				
		aux = aux->siguiente;


	}
	
	cout<<"EL CONTADOR: "<<contador<<endl;
	
	promedio = suma / contador;
	cout<<"La suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	
	cout<<endl;
}



