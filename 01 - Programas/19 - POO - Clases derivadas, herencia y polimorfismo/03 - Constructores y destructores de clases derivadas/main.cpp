/*
   Constructores y destructores de una clase derivada, sencillo programa para ver el orden de ejecución de los constructores
   y destructores.
*/
#include <iostream>
#include "ClaseDerivada.h"


int main(int argc, char** argv) {
 claseDerivada* obj1 = new claseDerivada(5,2);
 
	cout<<endl;
 
 delete obj1;
 
	return 0;
}
