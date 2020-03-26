/*
   Transmisión de Arrays.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int buscarMax(int *, int);

int main() {
	   const int nElementos = 5;
	   int numeros[nElementos] = {2,3,7,8,4};
				
				cout<<buscarMax(numeros, nElementos);
				
	   getch();
  	 return 0;
}

int buscarMax(int *dirArray, int nElementos) {
	   int max = 0;
	   
	   for(int i=0;i<nElementos;i++){
				
				// Si el numero es mayor que el anterior entonces
				
	   	if(*(dirArray+i)> max) {
								max = *(dirArray+i);
	   	}
	   }
	   return max;  
}
