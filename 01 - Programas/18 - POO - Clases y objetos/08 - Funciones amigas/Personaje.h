#include <iostream>

using namespace std;

class Personaje{
	
	// Declaracion de una funcion amiga.
	friend void modificar(Personaje &, int, int);
	
	private:
		int ataque; 
		int defensa;
	
	public:
		Personaje(int ataque, int defensa){
			this->ataque = ataque;
			this->defensa = defensa;
		}
		
		
		void mostrarDatos(){
			cout<<"\nAtaque: "<<ataque<<endl;
			cout<<"Defensa: "<<defensa<<endl;			
		}
};
