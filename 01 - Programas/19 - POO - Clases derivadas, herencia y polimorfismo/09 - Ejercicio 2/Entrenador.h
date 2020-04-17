#include<iostream>

using namespace std;

class Deportista{
	private:
		string nombreEntrenador;
		
	public:
		Deportista(string nombreEntrenador){
			this->nombreEntrenador = nombreEntrenador;
		}
		
		void mostrarDatos(){
			cout<<"Nombre entrenador: "<<nombreEntrenador<<endl;
		}
		
		void setNombreEntrenador(string nuevoNombre){
			this->nombreEntrenador = nuevoNombre;
		}
		
		string getNombreEntrenador(){
			return nombreEntrenador;
		}
};
