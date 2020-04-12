#include<iostream>

using namespace std;

class Vehiculo{
// Atributos
	private:
		string marca, modelo;
		float precio;
		
// Métodos
	public:
		Vehiculo(string marca, string modelo, float precio){ // Método constructor.
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		
		Vehiculo(){ // Constructor default, para hacer un array de objetos.
			
		}
		
		~Vehiculo(){
			
		}
		float getPrecio();
		void mostrarDatos();
		static int indiceMasBarato(Vehiculo coches[], int n);
};
