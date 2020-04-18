#include <iostream>
#include "EjemploPlantilla.h"

using namespace std;

int main(int argc, char** argv) {
	
	EjemploPlantilla <int, char> obj1(10, 'A');
	// Declaracion de los tipos de objetos
	
	obj1.mostrarDatos();
	
	return 0;
}
