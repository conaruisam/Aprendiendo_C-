#include<iostream>
#include "Vehiculo.h"

using namespace std;

float Vehiculo::getPrecio(){
	return precio;
}

void Vehiculo::mostrarDatos(){
	cout<<"Marca: "<<marca<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Precio: "<<precio<<endl;
}

int Vehiculo::indiceMasBarato(Vehiculo coches[], int n){
	float masBarato;
	int indiceMasBarato = 0;
	
	masBarato = coches[0].getPrecio();
	
	for(int i=0;i<n;i++){
		if (coches[i].getPrecio() < masBarato){
		 	masBarato = coches[i].getPrecio();
		 	indiceMasBarato = i;
		}
	}
	
	return indiceMasBarato;
	
}
