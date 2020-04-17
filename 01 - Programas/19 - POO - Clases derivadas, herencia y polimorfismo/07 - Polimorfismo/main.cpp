#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"

using namespace std;

int main(int argc, char** argv) {
	/*
	   Solo se puede crear objetos en una clase abstracta no se puede instanciarlos (es decir reservamos memoria para varios objetos y no lo creamos directamente)  
	*/	
	
 Poligono* poligonos[2]; // Creacion de objetos.
	
	// Poligono* poli = new Poligono()   -- Esto es un intento de instanciar un objeto y no va a compilar.
	
	// Indico el primero poligono que será un rectangulo
	
	poligonos[0] = new Rectangulo(3,5);
	poligonos[1] = new Triangulo(3,5,3);
	
	for(int i=0;i<2;i++){
	 
		cout<<"Area: "<<poligonos[i]->area()<<endl;
		cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl;
		cout<<endl;
	}
	
	return 0;
}
