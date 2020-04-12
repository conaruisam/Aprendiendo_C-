
#include <iostream>
#include "Cuadrilatero.h"

using namespace std;

int main(int argc, char** argv) {

	Cuadrilatero* cuadrado1;
	
	float lado1, lado2;
	
	cout<<"Introduce el lado1: ";
	 cin>>lado1;
		
	cout<<"Introduce el lado2: ";
	 cin>>lado2;
	 
 
	if (lado1 == lado2){
		cuadrado1 = new Cuadrilatero(lado1);		
	} else {
		cuadrado1 = new Cuadrilatero(lado1, lado2);
	}
		
	cout<<"El area del cuadrado es: "<<cuadrado1->obtenerArea()<<endl;
		
	cout<<"El perimetro del cuadrado es: "<<cuadrado1->obtenerPerimetro()<<endl;
		
		
	return 0;
}
