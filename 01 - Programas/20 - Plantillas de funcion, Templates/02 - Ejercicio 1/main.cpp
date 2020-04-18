/*
   Ejercicio 1 - Inlcuir una plantilla dentro de intercambio.h que pueda intercambiar el valor de dos elementos del mismo tipo.
*/

#include <iostream>
#include "Intercambio.h"

using namespace std;

int main(int argc, char** argv) {
	
	char dato1 = 'C';
	char dato2 = 'Z';
	
	
	intercambio(dato1, dato2);	
	
	cout<<"Dato 1: "<<dato1<<endl;
	cout<<"Dato 2: "<<dato2<<endl;
	
	
	return 0;
}
