// Ejercicio 4 Parte fraccionaria de un número.

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();

template <class TIPOD>
void despliegue(TIPOD numero);

float num1;

int main() {
 int    dato1 = 4;
 float  dato2 = 3.5;
 double dato3 = 5650.13;
 char   dato4[] = {"Isam"};
	
	
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}


// Funcion desplegar
template <class TIPOD>
void despliegue(TIPOD numero) {
	
	cout<<numero<<endl;
 
 
}


