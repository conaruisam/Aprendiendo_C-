#include<iostream>

using namespace std;

class Cuadrilatero{
// Atributos
	private:
		float lado1,lado2;
// M�todos.
	public:
		Cuadrilatero(float lado1, float lado2){ // M�todo constructor.
			this->lado1 = lado1;
			this->lado2 = lado2;			
		}
		
		Cuadrilatero(float lado){ // Constructor 2
			this->lado1 = this->lado2 = lado; // Todos los lados son iguales.			
		}
		// Las funciones estar�n en cuadrilatero.cpp
		float obtenerPerimetro();
		float obtenerArea();
		
};
