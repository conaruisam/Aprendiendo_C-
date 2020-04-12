#include <iostream>
#include "Persona.h"
using namespace std;

int main(int argc, char** argv) {
	// Depende de los parametros que utilice entrara por una funcion u otra.
	Persona* persona1 = new Persona("Isam", 20);

 // Llamo a correr.
	persona1->correr();
	
	Persona* persona2 = new Persona("50232342C");

	persona2->correr(20);
	
	return 0;
}
