// Array de objetos

#include <iostream>
#include "Alumno.h"
using namespace std;

int main(int argc, char** argv) {
	
	Alumno alumnos[4]; // Array  de objetos estatico.
	
	Alumno* alumnos2 = new Alumno[3]; // Creaci�n de un array de objetos din�mico.
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->pedirDatos();
		cout<<endl;
	}
	
	cout<<"\nMostrando las nota: "<<endl;
	
	for(int i=0;i<3;i++){
		(alumnos2+i)->mostrarNotas();
		cout<<endl;
	}
	
	return 0;
}
