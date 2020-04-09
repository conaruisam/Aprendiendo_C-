// Destructor de objetos.

#include <iostream>
#include "Perro.h"

using namespace std;

int main(int argc, char** argv) {
	
	Perro perro1("Fido", "Doberman");
	
	perro1.mostrarDatos();
	perro1.jugar();
	
	// destructor de objetos: 
	perro1.~Perro();
	
	Perro* perro2 = new Perro("Sasa", "Pitbull");
	
	perro2->jugar();
	
	perro2->mostrarDatos();
	
	
	delete perro2; // Para vaciar un objeto dinámico.
	
	return 0;
}
