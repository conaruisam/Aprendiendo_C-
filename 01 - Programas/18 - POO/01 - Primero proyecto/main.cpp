// Creacion de un objetos.

#include <iostream>
#include <conio.h>
#include "Punto.h" // Clase creada

using namespace std;


int main(int argc, char** argv) {
	
	Punto p1(2,1); // Creacion de un objeto estatico (p1)
	
		
	cout<<"El valor de x es :"<<p1.getX()<<endl;
	cout<<"El valor de y es :"<<p1.getY()<<endl;
	
 Punto* p2 = new Punto(); // Creacion de un objeto dinamico, mediante punteros;

	p2->setX(5);
	p2->setY(8);
	
	cout<<"El valor de x es :"<<p2->getX()<<endl;
	cout<<"El valor de y es :"<<p2->getY()<<endl;

 getch();
	return 0;
}
