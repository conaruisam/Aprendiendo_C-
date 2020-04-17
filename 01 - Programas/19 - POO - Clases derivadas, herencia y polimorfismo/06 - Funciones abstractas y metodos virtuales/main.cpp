#include <iostream>
#include "Planta.h"
#include "Carnivoro.h"
#include "Herviboro.h"


using namespace std;

int main(int argc, char** argv) {

	Planta* p1 = new Planta();
	Carnivoro* leon = new Carnivoro();
 Herviboro* caballo = new Herviboro();

	p1->alimentarse();
 leon->alimentarse();
	caballo->alimentarse();
	
	return 0;
}
