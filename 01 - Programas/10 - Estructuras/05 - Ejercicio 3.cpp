/*
  Ejercicio 3 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura
struct Empleado {
	char nombre[15];
	int  edad;
	float salario;
} empleado[100];

int main() {
	int numeroEmpleados = 0;
	float auxiliarMayorSalario = 0;
	float auxiliarMenorSalario = 0;
	
	int idMayorSalario = 0;
	int idMenorSalario = 0;
	
	
	
	cout<<"Introduce el numero de empleados a dar de alta: ";
	cin>>numeroEmpleados;
	
	for(int i=0;i<numeroEmpleados;i++){
						
  fflush(stdin);
		// Nombre
		cout<<"Introduzca el nombre del empleado "<<i+1<<": ";
		cin.getline(empleado[i].nombre,15,'\n');
		
		// Edad
		cout<<"Introduzca la edad del empleado: ";
	 cin>>empleado[i].edad;
	 
		// Salario
		cout<<"Introduzca el salario del empleado: ";
		cin>>empleado[i].salario;
		
		// Si es la primera ejecución la marcamos como la menor y mayor salario..
		if (i == 0){
			auxiliarMayorSalario = empleado[i].salario;
			idMayorSalario = i;
		} else	if (empleado[i].salario > auxiliarMayorSalario ) {
			auxiliarMayorSalario = empleado[i].salario;
			idMayorSalario = i;
		}		
		
		// Compruebo si es el salario menor
		if (i == 0) {
			auxiliarMenorSalario = empleado[i].salario;
			idMenorSalario = i;					
		} else if (empleado[i].salario < auxiliarMenorSalario) {
			auxiliarMenorSalario = empleado[i].salario;
			idMenorSalario = i;		
		}
	};
	
//		for(int i=0;i<numeroAlumnos;i++) {
// cout<<"\nEl que mas nota ha sacado es: "<<mayorPromedio<<endl;
	 // ESTADISTICAS
		cout<<"//  ************************** \\"<<endl;
  cout<<"//  ************************** \\"<<endl;
  cout<<"MENOR SALARIO: "<<endl;
		cout<<"Nombre:  "<<empleado[idMenorSalario].nombre<<endl;
	 cout<<"Edad:    "<<empleado[idMenorSalario].edad<<endl;
		cout<<"Salario: "<<empleado[idMenorSalario].salario<<endl;
		cout<<"//  ************************** \\"<<endl;
		cout<<"//  ************************** \\"<<endl;
		
		
		cout<<"//  ************************** \\"<<endl;
  cout<<"//  ************************** \\"<<endl;
  cout<<"Mayor SALARIO: "<<endl;
		cout<<"Nombre:  "<<empleado[idMayorSalario].nombre<<endl;
		cout<<"Edad:    "<<empleado[idMayorSalario].edad<<endl;
		cout<<"Salario: "<<empleado[idMayorSalario].salario<<endl;
		cout<<"//  ************************** \\"<<endl;
		cout<<"//  ************************** \\"<<endl;		
		
//		}
		
	
	
	
	return 0;
	getch();
}

