/*
   Ejercicio 20. Serie fibonacci.
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la funcion

// Función recursiva.
int fibonacci(int);



int main () {
	int nElementos;
	
	do{
		cout<<"Introduzca el numero de elementos: ";
		 cin>>nElementos;
	} while(nElementos<=0);
	
	cout<<"\nSerie Fibonacci: ";
	
	for(int i=0;i<nElementos;i++) {
		cout<<fibonacci(i)<<" , ";
	}
	
	getch();
	return 0;
}

// Función recursiva.

int fibonacci(int n) {
	
	if (n < 2)  { // Caso base, cuando llega aquí ya va subiendo de forma constante
		 return n;
	} else {
		 return fibonacci(n-1)+fibonacci(n-2);
	}
	
	return n;
}
