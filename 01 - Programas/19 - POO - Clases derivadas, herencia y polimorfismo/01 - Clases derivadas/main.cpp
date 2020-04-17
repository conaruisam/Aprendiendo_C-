#include <iostream>
#include "Triangulo.h"

using namespace std;

int main(int argc, char** argv) {
	
 Triangulo* t1 = new Triangulo(3, 5, 6, 7); 
 
 cout<<"Numero de lados del triangulo: "<<t1->geNLados()<<endl;
 cout<<"Area del triangulo: "<<t1->areaTriangulo();
 
	return 0;
}
