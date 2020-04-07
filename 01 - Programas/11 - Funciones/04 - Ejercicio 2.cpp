// Ejercicio 2 Numero al cuadrado

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();
float elevacion(float x);


float num1,num2;

int main() {

	float resultado;
	pedirDatos();
	
	cout<<"La elevacion es: "<<elevacion(num1);
	
	
	getch();
	return 0;
}


// Funcion pedirDatos

void pedirDatos() {

	// Rellena nuestras variables del main.
	cout<<"Indique el numero 1: ";
	 cin>>num1;

}

// Funcion multiplicacion

float elevacion(float x) {
 
 float resultado = pow(x,2);
 
 // cout<<"El resultado de la simple multiplicaciones: "<<resultado<<endl;
 return resultado;
 
}

