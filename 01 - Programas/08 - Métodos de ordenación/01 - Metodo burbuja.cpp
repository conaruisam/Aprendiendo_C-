/*
   M�todo burbuja, lee las variables y las compara con la del siguiente en el array, si es mayor lo va modificando,
   as� sucesivamente hasta que finalmente lo haya ordenador (el peor metodo de ordenaci�n que hay), da muchas vueltas.
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	
	 //int array1[5] = {2,4,3,5,1};
	 int lista[] = {4,2,5,1,3};
	 int i,j, aux;
	 
	 
	  for (i=0;i<5;i++){
		  for (j=0;j<5;j++){
		  	//cout<<array1[j];
		  	if (lista[j] > lista[j+1]){
		  		// Guardamos una copia.
		  		
						aux = lista[j];
						//Modificamos el numero que es mayor por el siguiente
						lista[j] = lista[j+1];
						// Y modificamos el siguiente
						lista[j+1] = aux;
		  	}
		  }
		 }

     //ordern descendente;
    cout<<"\nOrden Ascendente: ";
 	 for (int i=1;i<6;i++){
  	cout<<"\nEL ARRAY ES: "<<lista[i];
 	 };

// ordern descendente;
  cout<<"\nOrden Descendente: ";
  
	 for (int i=5;i>0;i--){
	 	cout<<"\nEL ARRAY ES: "<<lista[i];
	 };
	 
			
	
	return 0;
	getch();
}
