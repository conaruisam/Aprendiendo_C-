/*
   Menu creacion de arbol binario.
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo {  // Los árboles binarios pueden por la izquierda o por al derecha.
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre; // Importante dato para poder saber de donde viene este nodo.
};

// Prototipo de funcion.
void menu();
Nodo *crearNodo(int, Nodo*); // Funcion que devuelve el árbol.
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busquedaNodo(Nodo *, int);

// Formas de recorrer el arbol.
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void postOrden(Nodo *arbol);

// Funciones para borrar un nodo.
void eliminar(Nodo *, int); // Fase de busqueda previa a la eliminación del nodo.
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo*);
void reemplazar(Nodo *,Nodo*);
void borrarNodo(Nodo *);

Nodo *arbol = NULL;  // Inicializo el árbol.

int main() {
	menu(); // LLamo a menu
	
	getch();
	return 0;
}


void menu() {
	int dato,opcion, contador = 0;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar el arbol"<<endl;
		cout<<"3. Busqueda de un numero"<<endl;
		
		cout<<"--- FORMAS DE VER EL ARBOL ---"<<endl;
		
		cout<<"4. Mostrar en preOrden"<<endl;
		cout<<"5. Mostrar en inOrden"<<endl;
		cout<<"6. Mostrar en postorden"<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"OPCION: ";
		 cin>>opcion;
		 
		 switch(opcion) {
		 	case 1:
		 		       cout<<"\nIntroduce un numero: ";
		 		        cin>>dato;
		 		       insertarNodo(arbol,dato, NULL);
		 		       cout<<"\n";
		 		       system("pause");
		 		break;
		 		        
		 	case 2: cout<<"\nMostrar el arbol completo: "<<endl;
		 	        mostrarArbol(arbol,contador);
		 	        system("pause");
		 		break;
		 	case 3: 
		 	        cout<<"\nIntroduce el numero a buscar: ";
		 	         cin>>dato;
		 	        
												busquedaNodo(arbol, dato);
		 	        
		 	        if(busquedaNodo(arbol, dato) == true){
		 	        	cout<<"Ha encontrado el numero "<<dato<<endl;
		 	        } else {
		 	        	cout<<"No ha encontrado el numero"<<endl;
		 	        }
		 	        system("pause");
		 	 break;
		  case 4:
		  	       cout<<"\nMostrando el arbol en preOrden..: "<<endl;
		  	       preOrden(arbol);
		  	       system("pause");
		  	break;
		  case 5:
		  	       cout<<"\nMostrando el arbol en inOrden..: "<<endl;
		  	       inOrden(arbol);
		  	       system("pause");
		  	break;
		  case 6:
		  	       cout<<"\nMostrando el arbol en postOrden..: "<<endl;
		  	       postOrden(arbol);
		  	       system("pause");
		  	break;
		  case 7:
		  	       cout<<"\nIntroduzca el nodo a borrar..";
		  	        cin>>dato;
		  	        
		  	       eliminar(arbol, dato);		  	       
		  	       cout<<"\nLLEGAAQUYIIIIi";
		  	       system("pause");
		  	break;
		  case 8:
		  	break;
		  	
		 }
		 system("cls");
	}while(opcion!= 8);
	
}


// Esta función empieza a crear la raiz del árbol.

Nodo *crearNodo(int n, Nodo *padre) {
	Nodo *nuevo_nodo =  new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
	
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre) {
	
	if (arbol == NULL) { // Si el árbol esta vacio, pues lo creamos.
		Nodo *nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
		
	} else { // Si el árbol tiene un nodo o más
	 int valorRaiz = arbol->dato; // Raíz del arbol
	 
	 if(n < valorRaiz){ // Si la entrada es menor se inserta en el izquierdo, sino en el derecho.
	 	insertarNodo(arbol->izq,n, arbol);
	 } else {
	 	insertarNodo(arbol->der,n, arbol);
	 }
	}
	
}




void mostrarArbol(Nodo *arbol, int contador) {
	if (arbol == NULL){ // Si el arbol esta vacio.
	 return;		
	} else { // Llama a una funcion recursiva.
		mostrarArbol(arbol->der,contador+1);
		for(int i=0;i<contador;i++){ // Se pondra x espacios dependiendo del nivel en el que vayamos del arbol
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,contador+1);
	}
}


bool busquedaNodo(Nodo *arbol, int n) { // Esta funcion sera recursiva.
	
 if(arbol == NULL){ // Si el arbol está vacio.
		return false;
	} else if (arbol->dato == n){ // Si el nodo por el que vamos es el dato que esta buscando devolvemos true.
		return true;
	}  else if (n<arbol->dato){ // Si es menor al dato por el que vamos entonces buscamos a la izquierda del arbol, si es mayor buscamos a la derecha de forma recursiva.
	 return busquedaNodo(arbol->izq,n);
	} else {
	 return busquedaNodo(arbol->der,n);
	}
	
}

void preOrden(Nodo *arbol) { // Esta forma te muestra primero la raiz luego el lado izquierdo y luego el lado derecho.
	
	if (arbol == NULL){ // Importante, ya que la funcion es recursiva
		return;
	} else {
		cout<<arbol->dato<<" - "; // Primero se muestra la raiz
		preOrden(arbol->izq); // Luego se muestra el lado izquierdo.
		preOrden(arbol->der); // Luego se muestra el derecho.
	}
	
}


void inOrden(Nodo *arbol) { // Esta forma te muestra primero el lado izquierdo del arbol, luego al raiz y luego el lado derecho

	if (arbol == NULL){ // Importante, ya que la funcion es recursiva
		return;
	} else {
		inOrden(arbol->izq); // Primero la parte izquierda
		cout<<arbol->dato<<" - "; // Primero se muestra la raiz
		inOrden(arbol->der); // Y por ultimo la parte derecho
	}
	
}


void postOrden(Nodo *arbol) { // Esta forma te muestra primero el lado izquierdo, luego el lado derecho y por ultimo se muestra la raiz.

	if (arbol == NULL){ // Importante, ya que la funcion es recursiva
		return;
	} else {
		postOrden(arbol->izq); // Primero la parte izquierda
		postOrden(arbol->der); // Y por ultimo la parte derecho
		cout<<arbol->dato<<" - "; // Primero se muestra la raiz
	}
	
}

// Eliminar un nodo del arbol

void eliminar(Nodo *arbol, int n) {
	
	if (arbol == NULL){ // Si el arbol esta vacio...
		return;
	} else if(n < arbol->dato){ // Si el valor del dato que viene de entrada que busque por la izquierda del arbol, sino por la derecha
		eliminar(arbol->izq, n);
		
	} else if(n > arbol->dato){		
		eliminar(arbol->der, n);
	} else { // Si se encuentra el valor del nodo
		eliminarNodo(arbol); // FUNCION PRINCIPAL....
	}
}

// Eliminar el nodo encontrado.

void eliminarNodo(Nodo *nodoEliminar) {
	
	if(nodoEliminar->izq && nodoEliminar->der){ // Si el nodo tiene hijo izq y derecho
	
		Nodo *menor = minimo(nodoEliminar->der); // buscamos el nodo minimo de la parte izquierda
		nodoEliminar->dato = menor->dato;  // Remplazamos el minimo por el actual
		eliminarNodo(menor); // Y eliminamos el nodo.
		
	} else if(nodoEliminar->izq) { // Si el nodo a eliminar tiene un hijo izquierdo
		reemplazar(nodoEliminar, nodoEliminar->izq);
		borrarNodo(nodoEliminar);
	} else if(nodoEliminar->der) {// Si el nodo a eliminar tiene un hijo derecho.
		reemplazar(nodoEliminar, nodoEliminar->der);
		borrarNodo(nodoEliminar);		
	}	else { // Si un nodo no tiene hijos..
		reemplazar(nodoEliminar, NULL);
		borrarNodo(nodoEliminar); 
	}
	
}

Nodo *minimo(Nodo* arbol) { // Funcion que retorn el menor nodo izquierdo.
	if(arbol == NULL){ // Si el arbol esta vacio
		return NULL;
	}
	if(arbol->izq){ //Si tiene hijo izquierdo
		return minimo(arbol->izq); // Buscamos el hijo izquierda más posible
	} else { // Si no tiene hijo izquierdo retornamos el que nos llega..
		return arbol;
	}
}

void reemplazar(Nodo *arbol, Nodo*nuevoArbol) {
	if(arbol->padre){ // Si el nodo tiene padre..
	
	 if(arbol->dato == arbol->padre->izq->dato) { // Si este nodo tiene un hijo izquierdo
	 	arbol->padre->izq = nuevoArbol;
		} else if(arbol->dato == arbol->padre->der->dato) { // Si este nodo tiene un hijo derecho.
		arbol->padre->izq = nuevoArbol;			
		}
	} 
	
	if(nuevoArbol){
		nuevoArbol->padre = arbol->padre;
	}
}
 // FUNCION QUE SE ENCARGA DE BORRAR EL NODO POR COMPLETO...
void borrarNodo(Nodo *nodo) {
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
