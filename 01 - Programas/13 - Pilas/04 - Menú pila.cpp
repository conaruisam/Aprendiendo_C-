/*
    Menú pila.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>  // Delete 

using namespace std;
	
struct Nodo{
	  int dato; // 3
	  Nodo *siguiente; // Reservamos el espacio en memoria para el siguiente nodo.
};

// Prototipo de funcion.
void menu();
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main() {

    menu();
    
	   getch();
	   return 0;
}

void menu() {
	
    Nodo *pila = NULL;
    
    int dato; // Entrada pila.
    int respuesta;
    do {
    cout<<"1. Insertar un caracter a la pila "<<endl;
    cout<<"2. Mostrar todos los elementos de la pila"<<endl;
    cout<<"3. Salir"<<endl;
     cin>>respuesta;
    
    switch(respuesta) {
    	
    	case 1: 
    	   cout<<"Introduce la entrada a la pila: ";
    	    cin>>dato;
    	    
        agregarPila(pila, dato);
     	  break;
     case 2:
     	
        while(pila != NULL) { // Mientras no sea el final de la pila.
						    	
        sacarPila(pila, dato);
											
        if(pila != NULL){
         cout<<dato<<", ";
         } else {
           cout<<dato<<"."<<endl;
          }						    	
        }
          system("pause");
           break;
     case 3:
           break;
    }
    system("cls"); // limpiar pantalla
    } while (respuesta != 3);	
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
