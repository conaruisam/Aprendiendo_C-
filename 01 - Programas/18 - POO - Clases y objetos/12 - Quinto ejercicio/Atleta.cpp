#include<iostream>
#include "Atleta.h"

using namespace std;

float Atleta::getTiempoCarrera(){
	
	return tiempoCarrera;
	
}

void Atleta::mostrarDatos(){
	
	cout<<"Numero del Atleta: "<<numeroAtleta<<endl;
	cout<<"Nombre del atleta: "<<nombre<<endl;
	cout<<"Tiempo de la carrera: "<<tiempoCarrera<<endl;
	
}

int Atleta::obtenerGanador(Atleta atletas[], int n){
	
	int indiceGanador;
	float tiempoGanador;
	
	tiempoGanador = atletas[0].getTiempoCarrera();
	
	for(int i=0;i<n;i++){
		
		if(tiempoGanador > atletas[i].getTiempoCarrera()){
			tiempoGanador = atletas[i].getTiempoCarrera();
			indiceGanador = i;
		}
				
	}
	
	return indiceGanador;
	
}
