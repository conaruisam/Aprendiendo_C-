#include<iostream>

using namespace std;

class Estatico{
// Atributos
	private:
		static int contador; // Declaraci�n de un atributo estatico. 
		
// Metodos
	public:
		Estatico(){ // M�todo constructor
			contador++; // Simplemente cada vez que llame sume un contador.
		}
		
		int getContador(){
			return contador;
		}
		
		static int sumar(int n1, int n2){
			int suma = n1 + n2;
			return suma;
		}
};
