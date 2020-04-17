/*
   Herencia multiple
*/

#include <iostream>
#include "HidroAvion.h"
using namespace std;

int main(int argc, char** argv) {
	
	HidroAvion* ha1 = new HidroAvion("Fatca", "M200", "1350P");
	
 ha1->mostrarDatos();
 
	delete ha1;
	return 0;
}
