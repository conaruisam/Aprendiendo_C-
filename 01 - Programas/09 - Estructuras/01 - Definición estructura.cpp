/*
  Declaracion estructura en C++
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Definicion de la estructura
struct Persona {
	char nombre[15];
	int  edad;
}
pers1 = {"Isam",20},
// Parametrizable por el usuario
pers2;

int main() {
	
	//Datos persona1
	cout<<"Nombre1: "<<pers1.nombre<<"\n";	
	cout<<"Edad1: "<<pers1.edad<<"\n";
	
	cout<<"Introduzca los datos de la persona 2, NOMBRE: ";
	cin.getline(pers2.nombre,15,'\n');
	cout<<"Introduzca la edad: ";cin>>pers2.edad;
	// Datos persona 2
	cout<<"Nombre: "<<pers2.nombre<<"\n";	
	cout<<"Edad: "<<pers2.edad;
	
	return 0;
	getch();
}
