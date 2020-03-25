/*
   Paso de parametros de tipo estructura.
*/


#include<iostream>
#include<conio.h>

using namespace std;

struct Persona {
	char nombre[30];
 int edad;
} p1;

// Prototipo de la funcion
void pedirDatos();
void mostrarDatos(Persona);

int main () {
	// Pedimos los datos
	pedirDatos();
	
	// Y luego los mostramos
	mostrarDatos(p1);
	
	getch();
	return 0;
}


void pedirDatos() {
	
	cout<<"Introduzca el nombre: ";
	 cin.getline(p1.nombre,30,'\n');
	 
	cout<<"Introduzca la edad: ";
	 cin>>p1.edad;
}

void mostrarDatos(Persona p) {
	
	cout<<"Su nombre es: "<<p.nombre<<endl;
	cout<<"Y su edad es: "<<p.edad;
	
}
