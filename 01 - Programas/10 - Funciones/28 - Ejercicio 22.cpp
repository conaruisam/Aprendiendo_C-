/*
   Ejercicio 22. 
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de la funcion

// Funci�n recursiva.
int mostrarNumeros(int, int);



int main () {
	int inicio,fin;
	
	do{
		cout<<"Introduzca la base: ";
		 cin>>inicio;

		cout<<"Introduzca el exponente: ";
		 cin>>fin;

	} while(inicio > fin);
	
	
	for (int i=inicio;i<fin;i++){

	cout<<mostrarNumeros(i, fin)<<" , "<<endl;
		
	}
	
	getch();
	return 0;
}

// Funci�n recursiva.

int mostrarNumeros(int inicio, int fin) {
	
	if (inicio == fin)  { // Caso base, cuando llega aqu� ya va subiendo de forma constante
		 return inicio;
	} else {
		 return mostrarNumeros(inicio,fin-1); 
	}
}
