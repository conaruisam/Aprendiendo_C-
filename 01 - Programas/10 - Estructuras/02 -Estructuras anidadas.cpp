/*
  Declaracion estructuras anidadas en C++
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Estructura direccion
struct direccion{
	char ciudad[20];
	char calle[100];
	int codigoPostal;
};

// Definicion de la estructura
struct empleado {
	char nombre[15];
	int  edad;
	double salario;
	struct direccion dir_empleado;
}empleados[2];

int main() {
	
	
	for(int i=0;i<2;i++){
				fflush(stdin); // Vaciar el buffer
		
		
		
		// Nombre
		cout<<"Introduzca el nombre del empleado: ";
		cin.getline(empleados[i].nombre,15,'\n');
		
		// Edad
		cout<<"Introduzca la edad del empleado: ";
		cin>>empleados[i].edad;
		// Salario
		cout<<"Introduzca el salario del empleado: ";
		cin>>empleados[i].salario;
		
		fflush(stdin); // Vaciar el buffer
		
		// Ciudad
		cout<<"Introduzca su ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
		// Calle
		cout<<"Introduzca su calle: ";
		cin.getline(empleados[i].dir_empleado.calle, 100, '\n');
		// CODIGO POSTAL
		cout<<"Introduzca su CP: ";
		cin>>empleados[i].dir_empleado.codigoPostal;
		cout<<"\n";
	}
	
	
	// Impresion de datos
	
	for(int i=0;i<2;i++) {
		
	 cout<<"\nDatos del empleado: "<<i+1<<endl;
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Edad: "<<empleados[i].edad<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Calle: "<<empleados[i].dir_empleado.calle<<endl;
	 cout<<"Codigo postal: "<<empleados[i].dir_empleado.codigoPostal<<endl;
		
		
	}
	
	
	return 0;
	getch();
}
