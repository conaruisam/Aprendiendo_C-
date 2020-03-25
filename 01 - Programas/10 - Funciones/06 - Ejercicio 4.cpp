// Ejercicio 4 Parte fraccionaria de un número.

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();
float parteFraccionaria(float x);


float num1;

int main() {

	
	pedirDatos();
	
	cout<<"La parte fraccionaria es: "<<parteFraccionaria(num1);
	getch();
	return 0;
}


void pedirDatos() {

	// Rellena nuestras variables del main.
	cout<<"Indique un numero fraccionario: ";
	 cin>>num1;

}

// Funcion multiplicacion

float parteFraccionaria(float x) {
 // Dejaremos un auxiliar entero para sacar su decimal;
	int aux = x;
 
	float resultado;
 
 // Con esta simple resta sacamos el auxiliar.
 resultado = x - aux;
 
 return resultado;
 //cout<<"El resultado de la simple multiplicaciones: "<<resultado<<endl;
 
 
}


