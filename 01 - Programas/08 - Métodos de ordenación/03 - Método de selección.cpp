/*
   Método de selección (Selecciona el numero menor y lo va poniendo al principio y así sucesivamente.)
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	 int lista[] = {4,2,5,1,3};
	 
	 int aux,min;  // min es un indice que utilizaremos

				 
	   for (int i=0;i<5;i++){
	   	  //Inicializamos el mínimo
							min = i;
	   	  
							// Buscamos el mínimo a la derecha de por donde vamos siempre.
					for (int j = i+1;j<5;j++){
						aux = lista[j];
						
						if (lista[j] < lista[min]) {
							min = j;
						}
					}
					//
					aux = lista[i];
					lista[i]   = lista[min];
					lista[min] = aux;
		  }
	 
		 

 // Y lo muestro en al consola
   cout<<"\nEl array ordenado: ";
 	 for (int i=0;i<5;i++){
  	cout<<"\nEL ARRAY ES: "<<lista[i];
 	 };
	
	return 0;
	getch();
}
