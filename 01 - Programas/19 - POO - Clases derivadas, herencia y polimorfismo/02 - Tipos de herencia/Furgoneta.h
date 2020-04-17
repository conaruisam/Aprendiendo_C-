/*
   Herencia protegida.
*/
#include<iostream>
#include "Vehiculo.h"

using namespace std;

class Furgoneta : protected Vehiculo { 
	private:
		int carga;
	public:
		Furgoneta(string marca, string color, string modelo, int carga) : Vehiculo(marca, color, modelo){ // Constructor.
			this->carga = carga;
		}
		~Furgoneta(){ // Destructor
			
		}
		int getCarga(){
			return carga;
		}
		
		string obtenerColor(){
			string Color = getColor();
			return Color;
		}
};
