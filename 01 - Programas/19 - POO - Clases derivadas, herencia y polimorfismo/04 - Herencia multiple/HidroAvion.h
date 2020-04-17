#include<iostream>
#include "Barco.h"
#include "Avion.h"

using namespace std;

class HidroAvion : public Barco, public Avion{
	private:
		string codigo;
		
	public:
		HidroAvion(string nombre, string modelo, string codigo) : Barco(nombre), Avion(modelo){
			this->codigo = codigo;			
		}
		
		~HidroAvion(){
			
		}
		
		string getCodigo(){
			return codigo;
		}
		
		void mostrarDatos(){
			cout<<"Nombre: "<<getNombre()<<endl;
			cout<<"Modelo: "<<getModelo()<<endl;
			cout<<"Codigo: "<<codigo<<endl;
		}
};
