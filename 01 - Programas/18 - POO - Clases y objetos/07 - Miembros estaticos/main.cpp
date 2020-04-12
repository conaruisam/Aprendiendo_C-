// Miembros static de una calse

#include <iostream>
#include "Estatico.h"

using namespace std;

int main(int argc, char** argv) {
	Estatico* obj1 = new Estatico();
    Estatico* obj2 = new Estatico(); 
	
	cout<<obj2->getContador()<<endl; // Daría 2..
	
	cout<<"La suma es: "<<Estatico::sumar(4,5);
	
	return 0;
}
