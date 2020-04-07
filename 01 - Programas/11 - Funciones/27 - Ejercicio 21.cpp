/*
   Ejercicio 21. Funcion recursiva.
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la funcion

// Función recursiva.
int potencia(int, int);



int main () {
	int base,exponente;
	
	do{
		cout<<"Introduzca la base: ";
		 cin>>base;

		cout<<"Introduzca el exponente: ";
		 cin>>exponente;

	} while((base<=0) and (exponente<=0));
	
	cout<<"\nEl resultado es: "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

// Función recursiva.

int potencia(int base, int exponente) {
	
	if (exponente = 1)  { // Caso base, cuando llega aquí ya va subiendo de forma constante
		 return base;
	} else {
		 return base = base * potencia(base,exponente-1); 
	}
	
	return base;
}
