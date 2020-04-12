#include<iostream>

using namespace std;

class Cuadrilatero{
// Atributos
	private:
		float lado1,lado2;
// Métodos.
	public:
		Cuadrilatero(float lado1, float lado2){ // Método constructor.
			this->lado1 = lado1;
			this->lado2 = lado2;			
		}
		
		Cuadrilatero(float lado){ // Constructor 2
			this->lado1 = this->lado2 = lado; // Todos los lados son iguales.			
		}
		// Las funciones estarán en cuadrilatero.cpp
		float obtenerPerimetro();
		float obtenerArea();
		
};
