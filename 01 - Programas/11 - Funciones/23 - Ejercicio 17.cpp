/*
   Ejercicio 17.
*/


#include<iostream>
#include<conio.h>

using namespace std;

struct Complejo {
	float real,imaginaria;
} z1,z2;

// Prototipo de la funcion
void pedirDatos();
Complejo sumaNumeros(Complejo, Complejo);
void mostrar(Complejo);

int main () {
	// Pedimos los datos
	pedirDatos();	
	
	Complejo x = sumaNumeros(z1, z2);
	
	mostrar(x);
	getch();
	return 0;
}


void pedirDatos() {
	
	cout<<"Introduzca los datos para el primero número complejo (z1): "<<endl;
	
	cout<<"Parte real: ";
	 cin>>z1.real;

	cout<<"Parte imaginaria: ";
	 cin>>z1.imaginaria;

// SEGUNDA PARTE.
	cout<<"Introduzca los datos para el primero número complejo (z2): "<<endl;
	
	cout<<"Parte real: ";
	 cin>>z2.real;

	cout<<"Parte imaginaria: ";
	 cin>>z2.imaginaria;
}

Complejo sumaNumeros(Complejo z1, Complejo z2) {
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	
	return z1;
}
	

void mostrar (Complejo x) {
	
	cout<<"\nEl resultado de la suma: "<<x.real<<", "<<x.imaginaria<<endl;
}
