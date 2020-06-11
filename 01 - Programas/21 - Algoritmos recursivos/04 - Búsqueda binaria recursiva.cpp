/*
   Búsqueda binaria en un algoritmo recursivo.
*/

#include<iostream>

using namespace std;


// Prototipo

int busquedaBinaria(int[], int, int, int);

int main(){
	int arrayNum[] = {1,2,3,4,5};
	
	int retorno = busquedaBinaria(arrayNum, 5, 1,5);
	
	if(retorno == -1){
		cout<<"El elemento no ha sido encontrado "<<endl;
	} else{
		cout<<"El elemento ha sido encontrado en la posicion "<<retorno;
	}
	
	return 0;
}


int busquedaBinaria(int array[], int dato, int inferior, int superior){
	
	int mitad;
	
	if(inferior > superior){ // No encontrado
		return -1;
	} else {
		mitad = (inferior+superior)/2;
		
		if(dato == array[mitad]){
			return mitad;
		} else if(dato > array[mitad]){
			return busquedaBinaria(array, dato, mitad+1,superior);
		} else{
			return busquedaBinaria(array, dato, inferior, mitad-1);
		}
		
	}
}
