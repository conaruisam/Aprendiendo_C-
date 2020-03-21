/*
  Ejercicio 8 - Estructuras
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Definicion de la estructura
struct persona {
	char nombre[15];
	bool discapacidad; // 0 - NO DISCAPACIDAD, 1 - DISCAPACIDAD
}persona[100];

int main() {
	int nPersonas   = 0;
	
	cout<<"Introduce el numero de ciclistas a dar de alta: ";
	cin>>nPersonas;
	
	for(int i=0;i<nPersonas;i++){
						
  fflush(stdin);
  
		// Horas
		cout<<"Introduzca el nombre de la persona: ";
	 cin>>persona[i].nombre;
	 
		// Minutos
		cout<<"Introduzca si la persona tiene una discapacidad : (0 - NO, 1 SI) ";
		cin>>persona[i].discapacidad;
	 	 	 
	}
	cout<<" ------ PERSONAS SIN DISCAPACIDAD ------ "<<endl;
  // Personas sin discapacidad.
		for (int i=0;i<nPersonas;i++) {
			if (persona[i].discapacidad = false) {
				cout<<persona[i].nombre<<endl;
			}
		}

  // Personas con discapacidad.
  cout<<" ------ PERSONAS CON DISCAPACIDAD ------ "<<endl;
		for (int i=0;i<nPersonas;i++) {
			if (persona[i].discapacidad = true) {
				
				cout<<persona[i].nombre<<endl;
			}
		}
		
		
	
	return 0;
	getch();
}

