#include<iostream>
#include "Alumno.h"

using namespace std;

void Alumno::pedirDatos() {
	cout<<"Introduce la nota de matematicas: ";
	 cin>>calMate;

	cout<<"Introduce la nota de programacion: ";
	 cin>>calProgra;

	media = (calMate + calProgra) / 2;
	
}

void Alumno::mostrarNotas() {
	cout<<"Nota de mates: "<<calMate<<endl;
	
	cout<<"Nota de mates: "<<calProgra<<endl;
	
	cout<<"Media: "<<media<<endl;
}
