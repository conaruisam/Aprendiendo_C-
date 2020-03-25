// Ejercicio 6 

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void pedirDatos();


float numeroMax(float a,float b,float c);

float num1,num2,num3;

int main() {
	
 	cout<<"Introduzca un numero en pantalla: ";
 	 cin>>num1;
 	 
 	cout<<"Introduzca un numero en pantalla: ";
 	 cin>>num2;

 	cout<<"Introduzca un numero en pantalla: ";
 	 cin>>num3;
	

	cout<<"El mayor numero que has introducido es: "<<numeroMax(num1,num2,num3); 
	getch();
	return 0;
}


float numeroMax(float a,float b,float c) {
	
	int nMax;
	// Comprobamos cual es el numero mayor.
	if(a > b and a > c) {
		nMax = a;
	} else if (b > a and b > c) { 
	 nMax = b;
	} else {
		nMax = c;
	}
	
 
 return nMax;
}


