
// Herencia publica.

#include <iostream>
#include "Vehiculo.h"

using namespace std;

class Turismo : public Vehiculo{
	private:
		int numeroPuertas;
		
 public:
 	Turismo(string marca, string color, string modelo, int numeroPuertas) : Vehiculo(marca, color, modelo){ // A la derecha de los dos puntos llamamos al constructor de la clase Vehiculo
 		this->numeroPuertas = numeroPuertas;
 	}
 	
 	~Turismo(){ //Destructor
 		
 	}
 	
 	int getNumeroPuertas(){
 		return numeroPuertas;
 	}
 	
 	string devolverModelo(){
 		string modelo = getModelo();
 		
 		return modelo;
 	}
 	void mostrarDatos(){
 		cout<<"Los datos del vehiculo son: "<<endl;
 		cout<<"Marca: "<<getMarca()<<endl;
 		cout<<"Color: "<<getColor()<<endl;
 		cout<<"Modelo: "<<getModelo()<<endl;
 		cout<<"Numero de puertas: "<<getNumeroPuertas()<<endl; 		
 	}
};
