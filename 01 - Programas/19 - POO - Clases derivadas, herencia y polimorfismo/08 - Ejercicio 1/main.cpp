/*
    Ejercicio 1.
    
    a) Declarar un objeto llamado gato de tipo gatoDomestico y otro estrellaCirco de tipo Felino.
    b) Imprimir la dieta del gato y de estrellaCirco
    c) Imprimir el año y lugar de nacimiento
    d) Cambiar el nombre del dueño del gato
    e) Mostrar la raza de ambos gatos
    f) Cambiar el nombre del circo en el que actúan.
    
*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include "Felino.h"
#include "gatoDomestico.h"

using namespace std;

int main(int argc, char** argv) {
	// A
 GatoDomestico* gato = new GatoDomestico(2010, "Madrid", "Siamés", "Isam");
 Felino* estrellaCirco = new Felino(2013,"Kansas", "Bengala");
 
 // B
 cout<<"Dietas: "<<endl;
 cout<<"Gato: "<<gato->imprimirDieta()<<endl;
	cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl;
	
	// C
	cout<<"\nAnio Nacimiento - Lugar Nacimiento: "<<endl;
	cout<<"Gato: "<<gato->getAnioNacimiento()<<" - "<<gato->getLugarNacimiento()<<endl;
	cout<<"Estrella de circo: "<<estrellaCirco->getAnioNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl;
	
	// D
	cout<<"\nCambiar el nombre del dueño del gato: "<<endl;	
	string NuevoDuenio;
	
	cout<<"Introduce el nombre del nuevo duenio: ";
	 getline(cin,NuevoDuenio);

 gato->setNombreDuenio(NuevoDuenio);
	 
	cout<<"El nuevo nombre es: "<<gato->getNombreDuenio();
	
	// E
	cout<<"\n\nRaza de los gatos: "<<endl;
	cout<<gato->getRaza()<<endl;
	cout<<estrellaCirco->getRaza()<<endl;
	
	//F 
	cout<<"\nCambiar el nombre del nuevo circo: "<<endl;
	 string nuevoCirco;
	 
	 cout<<"Introduce el nombre del nuevo circo: ";
	 getline(cin,nuevoCirco);
	 
	 estrellaCirco->setNombreCirco(nuevoCirco);
	 
	 cout<<"El nombre del nuevo circo: "<<estrellaCirco->getNombreCirco();
	 
	delete gato;
	delete estrellaCirco;
	
 getch();
	return 0;
}
