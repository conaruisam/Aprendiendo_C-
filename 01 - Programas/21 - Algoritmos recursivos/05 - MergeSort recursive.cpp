/*
   Algoritmo MergeSort, ordenación de un array de forma recursiva.
   
   La ordenación se realiza mediante 3 indices, el primero, la mitad y el último.
   
   Separamos el array en pequeños arrays, luego los juntamos en pequeños bloques ya ORDENADOS, hasta obtener nuestro array completo ordenado.
   
*/


#include<iostream>

using namespace std;


// Prototipo

void mergesort(int[], int, int);
void mezclar(int[], int, int, int);

int main(){
	int array[] = {3,5,6,7,23,9};
	
	mergesort(array, 0, 5);
	
	for(int i= 0;i<6;i++){
		cout<<array[i]<<endl;
	}
	return 0;
}


void mergesort(int array[], int primero, int ultimo){
	int central;
	
	if(primero<ultimo){
		central = (primero+ultimo)/2;
		mergesort(array, primero, central); // Ordena la primera mitad de la lista.
		mergesort(array, central+1, ultimo); //  Ordena la segunda mitad de la lista
		mezclar(array, primero, central, ultimo); // Mezcla las las sublistas ordenadas
	}
	
}


void mezclar(int array[], int primero, int central, int ultimo){
	int* aux;
	
	int i,k,z;
	
	aux = new int[ultimo-primero+1];  // Punteros 
	
	i = z = primero; // Valores iniciales de los indices
	
	k = central + 1;
	
	while(i<= central && k>= ultimo) { // Bucle para la mezcla
	
		if(array[i] <= array[k]){ // Si la sublista izquierda es menor pues añadimos a nuestro array auxiliar la sublista izquierda, sino la derecha.
			aux[z] = array[i];
			z++;
			i++;
			
		} else { // 
			aux[z] = array[k];
			z++;
			k++;
		}
	}
	
	/*
	   Estos siguientes while se realizan por si queda algún elemento no mezclado.
	*/
	while(i<=central){
		aux[z++] = array[i++];
	}

	while(k<=ultimo){
		aux[z++] = array[k++];
	}
	
	// Y por último copiamos el array auxiliar creado hacia el array de entrada.
	for(int i=primero;i<=ultimo;i++){
		array[i] = aux[i];
	}
	
	delete aux;
	
}

