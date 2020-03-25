// Ejercicio 3 Multiplicacion de dos numeros.

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();
float funpot(float x, float y);


float num1,num2;

int main() {

	
	pedirDatos();
	
	funpot(num1,num2);
	
	
	getch();
	return 0;
}


void pedirDatos() {
	// Rellena nuestras variables del main.
	cout<<"Indique la base: ";
	 cin>>num1;

	cout<<"Indique el exponente: ";
	 cin>>num2;
}

// Funcion multiplicacion

float funpot(float x, float y) {
 
 float resultado = pow(x,y);
 cout<<"El resultado de la simple multiplicaciones: "<<resultado<<endl;
 
 
}


