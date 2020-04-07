// Ejercicio 1 Multiplicacion de dos numeros.

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();
void multiplicacion(float x, float y);


float num1,num2;

int main() {

	
	pedirDatos();
	
	multiplicacion(num1,num2);
	
	
	getch();
	return 0;
}


void pedirDatos() {
	// Rellena nuestras variables del main.
	cout<<"Indique el numero 1: ";
	 cin>>num1;

	cout<<"Indique el numero 2: ";
	 cin>>num2;
}

// Funcion multiplicacion

void multiplicacion(float x, float y) {
 
 float resultado = x * y;
 cout<<"El resultado de la simple multiplicaciones: "<<resultado<<endl;
 
 
}

