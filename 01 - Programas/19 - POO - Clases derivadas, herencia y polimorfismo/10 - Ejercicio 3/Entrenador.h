#include<iostream>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
	private:
		string estrategia;
		
	public:
		Entrenador(string nombre, string apellido, int edad, string estrategia) : Persona(nombre,apellido, edad){
			this->estrategia = estrategia;
		}
		void partidoFutbol(){
			cout<<"dirige el partido de futbol"<<endl;
		}
		
		void entrenamiento(){
			cout<<"dirige el entrenamiento"<<endl;
		}
		
		void planificarEntrenamiento(){
			cout<<"planifica el entrenamiento"<<endl;
		}
};
