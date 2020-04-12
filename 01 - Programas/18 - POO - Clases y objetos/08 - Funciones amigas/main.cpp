// Para probar las funciones amigas/ friend functions.

#include <iostream>
#include "Personaje.h"

using namespace std;

// Funcion para modificar los valores de ataque y defensa de un objeto.

void modificar(Personaje &p, int atk, int def){
	p.ataque = atk;
	p.defensa = def;
}

int main(int argc, char** argv) {
	
	Personaje* pers1 = new Personaje(8,10);
	
	pers1->mostrarDatos();
	
	modificar(*pers1, 3, 5);
	
	pers1->mostrarDatos();
	return 0;
}
