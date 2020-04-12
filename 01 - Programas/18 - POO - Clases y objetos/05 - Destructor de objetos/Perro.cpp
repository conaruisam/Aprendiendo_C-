#include<iostream>
#include "perro.h"

using namespace std;

void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	
	cout<<"El perrito "<<nombre<<" esta jugando"<<endl;
}
