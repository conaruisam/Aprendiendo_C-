// Array de objetos

#include <iostream>
#include "Alumno.h"
using namespace std;

int main(int argc, char** argv) {
	
	Alumno alumnos[4]; // Array  de objetos estatico.
	
	Alumno* alumnos2 = new Alumno[3]; // Creación de un array de objetos dinámico.
	
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
