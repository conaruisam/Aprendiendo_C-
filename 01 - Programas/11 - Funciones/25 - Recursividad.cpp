/*
   Recursividad.
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la funcion

// Función recursiva.
int factorial(int);



int main () {
	
	cout<<"El factorial de !3: "<<factorial(3)<<endl;
	
	getch();
	return 0;
}

int factorial(int n) {
	
	if (n == 0)  { // Caso base, cuando llega aquí ya va subiendo de forma constante
		 n = 1;
	} else {
		 n = n * factorial(n-1);
	}
	
	return n;
}
