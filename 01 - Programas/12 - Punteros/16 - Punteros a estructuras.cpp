/*
   Punteros a estructuras.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> // new y delete

using namespace std;

struct Persona {
	char nombre[30];
	int edad;
} persona, *puntero_persona = &persona;


// Prototipos de funcion
void pedirDatos();
void mostrarDatos(Persona *); 

int main() {
	
	pedirDatos();
	mostrarDatos(puntero_persona);
	
}


void pedirDatos() { 

   cout<<"Introduce el nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n');
    
   cout<<"Introduce la edad: ";
    cin>>puntero_persona->edad;
}


void mostrarDatos(Persona *punteroPersona){
	
	cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad: "<<puntero_persona->edad<<endl;
	
}

