#include "Intercambio.h"

using namespace std;

template <class N>
void ordenarAscendente(N *array, int nElementos){	
	
	for(int i=0;i<nElementos;i++){
		  for (int j=0;j<(nElementos-1);j++){
		  	if(array[j] > array[j+1]){
		  		intercambio(array[j], array[j+1]);
		  	}
		  }		
	}
	
}



template <class N>
void ordenarDescendente(N *array, int nElementos){	
	
	for(int i=0;i<nElementos;i++){
		  for (int j=0;j<(nElementos-1);j++){
		  	if(array[j] < array[j+1]){
		  		intercambio(array[j], array[j+1]);
		  	}
		  }		
	}
	
}
