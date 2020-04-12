/* 
    Construir un programa que dada una serie de vehículos caracterizados por su marca, modelo y precio, imprima las propieddades del vehiculo más barato.
    Para ello se deberán leer por teclado las características de cada vehículo y crear una clase que represente a cada uno de ellos.    
*/

#include <iostream>
#include "Vehiculo.h"

using namespace std;

int main(int argc, char** argv) {
	
	Vehiculo* coches; // Array de objetos.
	int numCoches;
	string marca, modelo;
	float precio;
	int indiceBarato;
	
	
	cout<<"Introduce la cantidad de vehiculos: ";
	 cin>>numCoches;
	
	coches = new Vehiculo[numCoches]; // Array de objetos 
	
	for(int i=0;i<numCoches;i++){
		cout<<"\nIntroduce los datos del coche "<<i+1<<endl;

		fflush(stdin);
		cout<<"Introduzca la marca: ";
		 getline(cin, marca);

		cout<<"Introduzca el modelo: ";
		 getline(cin, modelo);

		cout<<"Introduzca el precio: ";
		 cin>>precio;
		 
		 coches[i] = Vehiculo(marca, modelo, precio);
	}

	indiceBarato = Vehiculo::indiceMasBarato(coches, numCoches);
	
	cout<<"\n El vehiculo mas barato es: "<<endl;
	
	(coches+indiceBarato)->mostrarDatos();
	
	delete coches;
	
	return 0;
}
