// Destructor de objetos.

#include<iostream>

using namespace std;

class Perro{
 // Atributos
	private:
	 string nombre,raza;
				
	// Metodos
	public:
		Perro(string nombre, string raza){ // Constructor
			this->nombre = nombre; // THIS -- NOS SIRVE PARA AUTOREFERENCIAR AL NOMBRE DE LA CLASE.
			this->raza   = raza;
		}
		
		~Perro(){ // Destructor, lo que hace es vaciar la memoria. (sirve para vaciar unicamente los objetos estaticos)
		};
				
		void mostrarDatos();
		void jugar();
		
};
