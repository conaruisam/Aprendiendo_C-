/*
   Crear una plantilla para la clase materia cuyo dato para la calificacion sea T.
   
   a) Crear un objeto de tipo Materia usando el tipo int e imprimir sus valores.
   b) Crear un objeto tipo float
   c) Crear un objeto tipo char
   
*/

#include <iostream>
#include "Materia.h"

using namespace std;

int main(int argc, char** argv) {
	
	Materia <int> obj1(8);
	
	cout<<"Nota del primer objeto: "<<obj1.getCalificacion()<<endl;
	
	Materia <float> obj2(4.3);
	
	cout<<"Nota del segundo objeto: "<<obj2.getCalificacion()<<endl;
	
	Materia <char> obj3('A');
	
	cout<<"Nota del tercer objeto: "<<obj3.getCalificacion()<<endl;
	
	
	cout<<"\nCambiando la nota del segundo objeto"<<endl;
	obj2.setCalificacion(8.1);
	
	cout<<obj2.getCalificacion()<<endl;
	
	return 0;
}
