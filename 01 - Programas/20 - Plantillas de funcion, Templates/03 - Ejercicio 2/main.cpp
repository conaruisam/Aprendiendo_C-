#include <iostream>
#include "Ordenar.h"

using namespace std;

int main(int argc, char** argv) {
	
	int array[5] = {5,6,3,4,1};


	for(int i=0;i<5;i++){
		cout<<array[i]<<"-> ";
	}
	cout<<endl;
	
	cout<<"\nMostrando en orden ascendente: "<<endl;
		
 ordenarAscendente(array, 5);	
	
	for(int i=0;i<5;i++){
		cout<<array[i]<<"-> ";
	}
	
	cout<<"\nMostrando en orden descendente: "<<endl;
		
 ordenarDescendente(array, 5);	
	
	for(int i=0;i<5;i++){
		cout<<array[i]<<"-> ";
	}
	
	
	
	return 0;
}
