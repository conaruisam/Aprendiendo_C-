/*
  Ejercicio 5 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura de notas
struct notas {
	float  nota1;
	float  nota2;
	float  nota3;
} nota[100];

struct alumno {
	char nombre[15];
	char sexo[10];
	int  edad;
	struct notas alum_promedio;
	
} alumno[100];

int main() {
	int numeroAlumnos = 0;
	float auxuliarPromedior = 0;
	
	int idMayorPromedio = 0;
	
	cout<<"Introduce el numero de alumnos a dar de alta: ";
	cin>>numeroAlumnos;
	
	for(int i=0;i<numeroAlumnos;i++){
						
  fflush(stdin);
		// Nombre
		cout<<"Introduzca el nombre del alumno "<<i+1<<": ";
		cin.getline(alumno[i].nombre,15,'\n');
		
		// Sexo
		cout<<"Introduzca el sexo del alumno ";
		cin.getline(alumno[i].sexo,10,'\n');
		
		// Edad
		cout<<"Introduzca la edad del alumno: ";
	 cin>>alumno[i].edad;
	 
  fflush(stdin);			 
		// Nota 1
		cout<<"Introduzca la nota 1: ";
		cin>>alumno[i].alum_promedio.nota1;
		
		// Nota 2
		cout<<"Introduzca la nota 2: ";
		cin>>alumno[i].alum_promedio.nota2;
		
		// Nota 3
		cout<<"Introduzca la nota 3: ";
		cin>>alumno[i].alum_promedio.nota3;
		
		float promedio = (alumno[i].alum_promedio.nota1 + alumno[i].alum_promedio.nota2 + alumno[i].alum_promedio.nota3) / 3;
   
		if (promedio > auxuliarPromedior ) {
			auxuliarPromedior = promedio;
			idMayorPromedio = i;
		}		
	}
		
	

	 cout<<"\nDatos del alumno con mayor nota: "<<idMayorPromedio+1<<endl;
	 
		cout<<"Nombre: "<<alumno[idMayorPromedio].nombre<<endl;
		
		cout<<"Sexo: "<<alumno[idMayorPromedio].sexo<<endl;
		
		cout<<"Edad: "<<alumno[idMayorPromedio].edad<<endl;
			
		cout<<"\n---------------------------------------";
	
	return 0;
	getch();
}

