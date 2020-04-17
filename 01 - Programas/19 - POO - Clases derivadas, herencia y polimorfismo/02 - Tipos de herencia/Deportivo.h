/*
   Herencia privada..
*/

#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Deportivo : private Vehiculo{
	private:
		int cilindrada;
		
		public:
			Deportivo(string marca, string color, string modelo, int cilindrada) : Vehiculo(marca, color, modelo){
				this->cilindrada = cilindrada;
			}
			~Deportivo(){
				
			}
			int getCilindrada(){
				return cilindrada;
			}
};
