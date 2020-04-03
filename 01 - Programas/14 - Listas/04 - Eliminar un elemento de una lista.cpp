/*
  Buscar elemento en una lista
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
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

Nodo *lista = NULL; // Primer paso - Inicializar la lista, variable publica.

int main() {
  
    menu();
 
	getch();
	return 0;
}



// -- FUNCIONES -- 

void menu(){
	int opcion, dato;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Buscar un elemento en la lista\n";
		cout<<"4. Eliminar un elemento en la lista\n";
		cout<<"5. Salir";
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
		 		cout<<"\nIntroduzca el numero a buscar: ";
		 		 cin>>dato;
		 		 
		 		buscarLista(lista, dato);	
		 		
		 		break;
		 	case 4:
		 		cout<<"\nIntroduzca el nodo a borrar: ";
		 		 cin>>dato;
		 		 
		 		eliminarNodo(lista, dato);
		 		
		 		break;
		 	case 5:		 			
		 		break;
		 }
		 system("cls");
	} while (opcion != 5);
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

void buscarLista(Nodo *, int n) {
	bool flag = false;
	
	Nodo *actual = new Nodo(); // Primer paso crear un nodo auxiliar (que realmente será el que se muestre)
	actual = lista;
	
	while((actual != NULL) && (actual->dato <= n)){
		if(actual->dato == n){
			flag = true;   // Recorremos al lista y si lo encuentra el dato pues activamos el flag.
		}
		actual = actual->siguiente;
	}
	// Y depende del flag pues indicamos si lo hemos encontrado.
	if(flag == true){
		cout<<"El elemento "<<n<<" ha sido encontrado\n";
	} else {
		cout<<"El elemento "<<n<<" no ha sido encontrado\n";
	}
	
	system("pause")	;
	cout<<endl;
}



void eliminarNodo(Nodo *&lista, int n) {
	if(lista != NULL){
		// Se crean dos nodos auxiliares, uno para recorrer la lista y el otro para utilizarlo como auxiliar al borrar un elemento.
		Nodo *aux_borrar;
		Nodo *anterior = NULL;

		aux_borrar = lista;

		// Este while recorrerá la lista y si encuentra el dato que hemos pedido por pantalla pues terminaría, sino quedaría en null (aux_borrar)
		while ((aux_borrar != NULL) && (aux_borrar->dato !=n )) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente; // Con este sencillo paso recorremos la lista.
		}
		
		if(aux_borrar == NULL){ // Esto indicaria que ha recorrido toda la lista y no ha logrado encontrar el nodo que se estaba buscando.
			cout<<"El elemento no existe";
		} 
		else if (anterior == NULL){ // Si el anterior es igual a NULL, es que solo ha recorrido un registro y lo ha encontrado (ES DECIR QUE ES EL PRIMER REGISTRO)
			lista = lista->siguiente;			// La lista actual la pasamos a la siguiente y borramos el registro 
			delete aux_borrar;			
		} else { 
			anterior->siguiente = aux_borrar->siguiente;
		 delete aux_borrar;
		}
	} else {
		cout<<"LA LISTA ESTA VACIA"<<endl;
	}
	
	system("pause")	;
}
