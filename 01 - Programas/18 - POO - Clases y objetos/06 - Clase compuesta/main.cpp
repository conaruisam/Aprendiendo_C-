// Clases compuestas, una clase compuesta es una clase que entre sus atributos tiene un objeto de otra clase.

#include <iostream>
#include "Estudiante.h"

using namespace std;

int main(int argc, char** argv) {
	Estudiante* estudiante1 = new Estudiante("351F", 8.6, 12, "Calle witerico 20");
	
	estudiante1->mostrarDatos();
	return 0;
}
