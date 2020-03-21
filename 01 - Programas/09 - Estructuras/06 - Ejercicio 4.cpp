/*
  Ejercicio 4 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura
struct Atletas {
	char nombre[15];
	int  edad;
	int  medallas;
} atletas[100];

int main() {
	int numeroAtletas = 0;
	float auxiliarMayorMedallas = 0;
	
	int idMayorMedallas = 0;
	
	cout<<"Introduce el numero de empleados a dar de alta: ";
	cin>>numeroAtletas;
	
	for(int i=0;i<numeroAtletas;i++){
						
  fflush(stdin);
		// Nombre
		cout<<"Introduzca el nombre del empleado "<<i+1<<": ";
		cin.getline(atletas[i].nombre,15,'\n');
		
		// Edad
		cout<<"Introduzca la edad del empleado: ";
	 cin>>atletas[i].edad;
	 
		// Medallas
		cout<<"Introduzca el numero de medallas ganadas: ";
		cin>>atletas[i].medallas;
		
		// Si es la primera ejecución la marcamos como la menor y mayor salario..
		if (atletas[i].medallas > auxiliarMayorMedallas ) {
			auxiliarMayorMedallas = atletas[i].medallas;
			idMayorMedallas = i;
		}
	}
		
	 // ESTADISTICAS
		cout<<"//  ************************** \\"<<endl;
  cout<<"//  ************************** \\"<<endl;
  cout<<"Mayor medallas: "<<endl;
		cout<<"Nombre:  "<<atletas[idMayorMedallas].nombre<<endl;
	 cout<<"Edad:    "<<atletas[idMayorMedallas].edad<<endl;
		cout<<"Salario: "<<atletas[idMayorMedallas].medallas<<endl;
		cout<<"//  ************************** \\"<<endl;
		cout<<"//  ************************** \\"<<endl;
	
	
	
	return 0;
	getch();
}

