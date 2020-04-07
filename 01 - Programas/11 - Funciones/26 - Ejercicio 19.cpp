/*
   Ejercicio 19. Suma recursiva de los 10 primeros numeros
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la funcion

// Función recursiva.
int sumaRecursiva(int);



int main () {
	
	cout<<"La suma recursiva de los 10 primeros numeros enteros son =  "<<sumaRecursiva(10)<<endl;
	
	getch();
	return 0;
}

int sumaRecursiva(int n) {
	
	if (n == 1)  { // Caso base, cuando llega aquí ya va subiendo de forma constante
		 n = 1;
	} else {
		 n = n + sumaRecursiva(n-1);
	}
	
	return n;
}
