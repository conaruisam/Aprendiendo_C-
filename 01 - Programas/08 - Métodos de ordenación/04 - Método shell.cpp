/*
   M�todo de shell, mejora del metodo de inserci�n
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//Una simple funci�n de intercambio

void intecarmbio(float &x, float &y){
	float aux;
	
	aux = x;
	x   = y;
	y   = aux;
	
};

// Funci�n de ordenaci�n

void ordenacionShell(float a[], int n){
	    int salto,i,j,k;
	    
	    // El salto entre los array tiene que ser entre 2.
	    salto = n/2;
	    
	    
	    while(salto>0) {
	    // Empieza la primera lectura para comparar los arrays.
							for(i=salto;i<n;i++)	{
										j = i - salto;
										
										while(j>=0) {
											k = j + salto;
											// Aqu� hacemos la comprobaci�n
											if(a[j] <= a[k]) { // Los elementos est�n oirdeandos
												j = -1;
											} else {
												    intecarmbio(a[j],a[k]);
												    j -= salto;
											}
										}
							}
							// Si no ha terminado de ordenarlo, empezamos de nuevo.
							salto = salto/2;
					}
}

int main(){
	
	float entrada[] = {4,2,1,5,3};
	
	
	ordenacionShell(entrada,5);
	
	for(int i = 0; i<5;i++) {
		
	 cout<<entrada[i]<<"\n";
	}
	
	return 0;
	getch();
}
