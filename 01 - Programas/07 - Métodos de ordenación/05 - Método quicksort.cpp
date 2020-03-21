/*
   Método de quick sort
*/

#include<iostream>
#include<conio.h>

using namespace std;
void intercambio(int &x, int &y) {
	float aux;
	
	aux = x;
	x   = y;
	y   = aux;
}

void quickSort(int a[], int  primero, int ultimo)  {
	int i, j,central;
	float posicionCentral;
	
	central = (primero+ultimo) /2;
	posicionCentral = a[central];
	
	
	// El indice I se utilizará para ordenar la parte izquierda
	i = primero;
	// El indice J se utilizará para ordenar la parte izquierda
	j = ultimo;
	
	do {
		
		    while (a[i] < posicionCentral) i++;
		    while (a[j] > posicionCentral) j--;
		
		    if (i<=j){
		    	intercambio(a[i],a[j]);
		    	i++;
		    	j--;
		    }
	} while (i<=j); // Hasta que se crucen
	
	// Una vez ordenados se ordena p
	if(primero < j) {
		quickSort(a,primero,j); // Ordenamos la lista izquierda
	}
	if(i < ultimo) {
		quickSort(a,i,ultimo); // Ordenamos la lista derecha.
	}
}

int main(){
	
	 int lista[] = {4,2,5,1,3,9};
	 
	 int aux,posicion;
	 
	 quickSort(lista,0,6);
	 
	 for(int i = 0;i<6;i++){
	 	cout<<lista[i]<<"\n";
	 }
	
	return 0;
	getch();
}
