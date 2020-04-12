// Implementacion de la clase Persona

#include<iostream>

using namespace std;

class Persona{
	// Atributos
	private:
		string nombre;
		int edad;
		string dni;
 // Métodos
 public:
 	Persona(string _nombre, int _edad){ // Metodo constructor (mismo nombre que la clase
 		nombre = _nombre;
 		edad = _edad;
 	}
 	
 	Persona(string _dni){ // Constructor con unicamente el dni.
		 dni = _dni;
		}
		
		/*  --- PARTE IMPORTANTE --- 
		  Estas dos funciones se llaman igual pero funcionan debido a que los parametros de entrada son distintos.
		    --- PARTE IMPORTANTE --- 
	 */
		    
		void correr(){ // Podria crear otro archivo .cpp declarando las funciones pero lo hago aquí para probarlo más rapido.
			cout<<"Soy "<<nombre<<", tengo "<<edad<<" anyos y estoy corriendo una maraton"<<endl;
		}

		void correr(int km){ // 
			cout<<"He corrido "<<km<<" kilometros "<<endl;
		}		
};
