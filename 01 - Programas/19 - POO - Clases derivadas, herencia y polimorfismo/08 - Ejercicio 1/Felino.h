#ifndef FELINO_H
#define FELINO_H
#include <iostream>
#include "Mamifero.h"

using namespace std;

class Felino : public Mamifero{
	private:
		string nombreCirco;
	public:
		Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero( anioNacimiento,lugarNacimiento,raza){
			this->nombreCirco = nombreCirco;
		}
		
		Felino (int anioNacimiento, string lugarNacimiento, string raza) : Mamifero (anioNacimiento, lugarNacimiento, raza){
			
		}
		
		~Felino(){
			
		}
		string imprimirDieta(){
			return "La dieta del felino es a base de carne";
		}
		
		// Metodos setter
		
		void setNombreCirco(string nombreCirco){
			this->nombreCirco = nombreCirco;
		}
		
		
		// Metodo getter
		
		string getNombreCirco(){
			return nombreCirco;
		}
};

#endif
