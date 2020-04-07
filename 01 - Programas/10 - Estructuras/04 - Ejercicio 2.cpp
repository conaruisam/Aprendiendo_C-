/*
  Ejercicio 2 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura
struct Alumno {
	char nombre[15];
	int  edad;
	float promedio;
} alumnos[100];

int main() {
	int numeroAlumnos;
	float auxiliarPromedio;
	int mayorPromedio;
	
	
	
	cout<<"Introduce el numero de alumnos a dar de alta: ";
	cin>>numeroAlumnos;
	
	for(int i=0;i<numeroAlumnos;i++){
						
  fflush(stdin);
		// Nombre
		cout<<"Introduzca el nombre del alumno "<<i+1<<": ";
		cin.getline(alumnos[i].nombre,15,'\n');
		
		// Edad
		cout<<"Introduzca la edad del alumno: ";
		cin>>alumnos[i].edad;
		// Promedio
		cout<<"Introduzca el promedio del alumno: ";
		cin>>alumnos[i].promedio;
		if (auxiliarPromedio < alumnos[i].promedio) {
			auxiliarPromedio = alumnos[i].promedio;
			mayorPromedio = i;
		}		
	};
	
//		for(int i=0;i<numeroAlumnos;i++) {
//cout<<"\nEl que mas nota ha sacado es: "<<mayorPromedio<<endl;
	 
		cout<<"Nombre: "<<alumnos[mayorPromedio].nombre<<endl;
		
		cout<<"Edad: "<<alumnos[mayorPromedio].edad<<endl;
		
		cout<<"Sexo: "<<alumnos[mayorPromedio].promedio<<endl;
//		}
		
	
	
	
	return 0;
	getch();
}

