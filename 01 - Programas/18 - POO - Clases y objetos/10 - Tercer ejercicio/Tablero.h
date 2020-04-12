#include<iostream>

using namespace std;

class Tablero{
// Atributos
	private:
		int x,y;
// Metodos		
	public:
		Tablero(int x, int y){ // Metodo constructor.
			this->x = x;
			this->y = x;			
		}

// Funciones   
		void moverArriba(int n);
		void moverAbajo(int n);
		void moverDerecha(int n);
		void moverIzquierda(int n);
		
		// M�todos getter..
		int getX();
		int getY();
};
