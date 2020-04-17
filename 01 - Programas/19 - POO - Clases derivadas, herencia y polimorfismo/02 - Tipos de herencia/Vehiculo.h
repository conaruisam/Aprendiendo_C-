// Guardian de inclusión multiple
#ifndef VEHICULO_H  // Esto se debe poner cuando la clase es heredada por varios hijos, por que sino no llega a compilar
#define VEHICULO_H

#include <iostream>

using namespace std;

class Vehiculo{
	private:
		string marca;
		string color;
	protected:
		string modelo;

  string getModelo(){
  	return modelo;
  }
  
 public:
				Vehiculo(string marca, string color, string modelo){
					this->marca  = marca;
					this->color  = color;
					this->modelo = modelo;
				}
				
				string getMarca(){
					return marca;
				}
				
				string getColor(){
					return color;
				}
				
				void setColor(string color){
					this->color = color;
				}

				void setMarca(string marca){
					this->marca = marca;
				}
};


#endif // Terminar el if del guardian
