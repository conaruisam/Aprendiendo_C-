#include<iostream>
// Las clases compuestas
#include "Expediente.h" 
#include "Direccion.h"

using namespace std;

class Estudiante{
// Atributos
	private:
	 string codigo;
		float media;
		Expediente exp;
		Direccion dir;
// Metodos		
 public:
		Estudiante(string codigo, float media, int nroExpediente, string direccion) : exp(nroExpediente), dir(direccion){ // Despues de los dos puntos indicamos lo que debe enviar a los constructores de esas clases
			this->codigo = codigo;
			this->media  = media;
		}
	
	void mostrarDatos(){
		cout<<"Codigo: "<<codigo<<endl;
		cout<<"Media: "<<media<<endl;
				
		// Mostrando las clases compuestas, mediante las funciones que están dentro de esas clases.
		cout<<"Numero de Expediente: "<<exp.getNroExpediente()<<endl;
		cout<<"Direccion: "<<dir.getDireccion()<<endl;
		
	}
};
