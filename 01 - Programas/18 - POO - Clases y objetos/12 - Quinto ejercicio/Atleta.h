#include<iostream>

using namespace std;

class Atleta{
// Atributos.
	private:
		int numeroAtleta;
		string nombre;
		float tiempoCarrera;
// Metodos.	
	public:
		Atleta(int numeroAtleta, string nombre, float tiempoCarrera){ // Constructor
			
			this->numeroAtleta = numeroAtleta;
			this->nombre = nombre;
			this->tiempoCarrera = tiempoCarrera;
			
		}
		
		Atleta(){ // Constructor default
			
		}
		
		~Atleta(){ // Destructor.
						
		}
		
		float getTiempoCarrera();
		void mostrarDatos();
		// Funcion estatica (independiente de lo demás de la clase)
		static int obtenerGanador(Atleta atletas[], int n);
};
