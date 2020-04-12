/*
   
			Construir un programa para una competencia de atletismo, el programa debe gestionar una serie de atletas caracterizados por su 
   número de atleta, nombre y tiempo de carrera, al final el programa debe mostrar los datos del atleta ganador de la carrera.
   
*/

#include <iostream>
#include "Atleta.h"

using namespace std;

int main(int argc, char** argv) {
	Atleta* atletas;
	int nAtletas, indiceGanador;

	int numeroAtleta;
	string nombre;
	float tiempoCarrera;
	
	cout<<"Introduzca el numero de atletas a participar: ";
	 cin>>nAtletas;
	 
	 
	atletas = new Atleta[nAtletas];
	
	for(int i=0;i<nAtletas;i++){
		cout<<"\nIntroduzca los datos del atleta "<<i+1<<endl;

		cout<<"Introduce el numero del atleta: ";
		 cin>>numeroAtleta;

		fflush(stdin);
		 
		cout<<"Introduce el nombre del atleta: ";
		 getline(cin, nombre);

	
					
		cout<<"Introduce el tiempo de la carrera: ";
		 cin>>tiempoCarrera;
		 
		atletas[i] = Atleta(numeroAtleta, nombre, tiempoCarrera);
		
	}
	
	indiceGanador = Atleta::obtenerGanador(atletas, nAtletas);
	
	cout<<"\nEl ganador es: "<<endl;
	
	atletas[indiceGanador].mostrarDatos();
	
	delete atletas;
	
	return 0;
}
