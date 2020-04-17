#include<iostream>
#include "Alumno.h"
#include "Deportista.h"

using namespace std;

class BecaDeporte : public Alumno, public Deportista{
	private:
		float importeBeca;
		
	public:
		BecaDeporte(string nombreCarrera, string nombreEntrenador, float importeBeca) : Alumno(nombreCarrera), Deportista(nombreEntrenador){
			this->importeBeca = importeBeca;
		}
		
		~BecaDeporte(){
			
		}
		
		void mostrarDatos(){
			Alumno::mostrarDatos();
			Deportista::mostrarDatos();
			cout<<"El importe de la beca: "<<importeBeca;
		}
		
	 float setImporteBeca(float n){// n será un porcentaje de incremento.
	 	float aumento = (importeBeca *n) / 100;
	 	this->importeBeca += aumento;
	 }
	 
	 float getImporteBeca(){
	 	return importeBeca;
	 }
};

