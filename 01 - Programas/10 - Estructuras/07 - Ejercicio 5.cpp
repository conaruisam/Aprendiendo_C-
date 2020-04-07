/*
  Ejercicio 5 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura de notas
struct notas {
	int  nota1;
	int  nota2;
	int  nota3;
} nota[100];

struct alumno {
	char nombre[15];
	char sexo[10];
	int  edad;
	struct notas alum_promedio;
	
} alumno[100];

int main() {
	int numeroAlumnos = 0;
	float auxiliarMayorMedallas = 0;
	
	int idMayorMedallas = 0;
	
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
	 
			 
		// Nota 1
		cout<<"Introduzca la nota 1: ";
		cin>>alumno[i].alum_promedio.nota1;
		
		// Nota 2
		cout<<"Introduzca la nota 2: ";
		cin>>alumno[i].alum_promedio.nota2;
		
		// Nota 3
		cout<<"Introduzca la nota 3: ";
		cin>>alumno[i].alum_promedio.nota3;
		

	}
		
	
	for(int i=0;i<numeroAlumnos;i++) {
		
	 cout<<"\nDatos del corredor: "<<i+1<<endl;
	 
		cout<<"Nombre: "<<alumno[i].nombre<<endl;
		
		cout<<"Sexo: "<<alumno[i].sexo<<endl;
		
		cout<<"Edad: "<<alumno[i].edad<<endl;
		
		// Sacamos la media
		alumno[i].alum_promedio = (alumno[i].alum_promedio.nota1 + alumno[i].alum_promedio.nota2 + alumno[i].alum_promedio.nota3) / numeroAlumnos;
				
		cout<<"Nota media: "<<alumno[i].alum_promedio.nota1<<"        ";
		
		cout<<"Nota 2: "<<alumno[i].alum_promedio.nota2<<"        ";
		
		cout<<"Nota 3: "<<alumno[i].alum_promedio.nota3<<"        ";
		
		cout<<"\n---------------------------------------";
		
	}
	
	
	
	
	return 0;
	getch();
}

