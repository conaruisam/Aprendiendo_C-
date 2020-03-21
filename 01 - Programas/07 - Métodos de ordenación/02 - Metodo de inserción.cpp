/*
   Método de inserción (Lee el array y lo compara con el de la izquierda, si es mayor se cambia por el anterior)
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	 int lista[] = {4,2,5,1,3};
	 
	 int aux,posicion;

				 
	   for (int i=0;i<5;i++){
	   	// Preparamos el while, definiendo la posicion como el indice y utilizando un auxuliar 
     posicion = i;
     aux = lista[i];
     
     /* Aquí está la clave, lo que se hace es comprobar por cada posición en la que nos encontremos,
        todos los numeros de atras si debe cambiarse por ellos. 
					*/
     while((posicion>0) && (lista[posicion-1] > aux)) {
     	
     	lista[posicion] = lista[posicion-1];
     	
     	
						// Restamos la posicion para poder comprobar todas las situaciones posibles.
     	posicion--;
     	
     }
     lista[posicion] = aux;
     
		  }
	 
		 

 // Y lo muestro en al consola
   cout<<"\nEl array ordenado: ";
 	 for (int j=0;j<5;j++){
  	cout<<"\nEL ARRAY ES: "<<lista[j];
 	 };
	
	return 0;
	getch();
}
