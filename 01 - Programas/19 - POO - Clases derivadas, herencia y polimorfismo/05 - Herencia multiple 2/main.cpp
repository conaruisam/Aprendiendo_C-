/*
   Metodos con el mismo nombre.
*/
#include <iostream>
#include "ClaseDerivada.h"

using namespace std;

int main(int argc, char** argv) {
 ClaseDerivada* d1 = new ClaseDerivada(1,5,3);
 
 cout<<d1->getX();
 
 delete d1;
 
	return 0;
}
