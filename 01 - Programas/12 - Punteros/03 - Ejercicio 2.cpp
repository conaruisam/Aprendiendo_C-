/*
   Ejercicio 2
*/

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();

char comprobarPrimo(int);

int numeroPrimo, *dir_numeroPrimo;
char flagPrimo ='V';

int main() {
	
	pedirDatos();
	
	comprobarPrimo(*dir_numeroPrimo);

 if(flagPrimo == 'V') {
 	cout<<"El numero "<<*dir_numeroPrimo<<" es primo"<<endl;
 	cout<<"Esta almacenado en: "<<dir_numeroPrimo<<endl; 		
 } else {
 	cout<<"El numero: "<<*dir_numeroPrimo<<" no es primo"<<endl;
 	cout<<"Esta almacenado en: "<<dir_numeroPrimo<<endl;
 }

	
	getch();
	return 0;
}

void pedirDatos() {
		cout<<"Introduzca un numero: ";
	 cin>>numeroPrimo;
	 
	 dir_numeroPrimo = &numeroPrimo;
}

char comprobarPrimo(int nPrimo) {
	
	int index;
	index = nPrimo -1;
	//cout<<"\n"<<flagPrimo<<endl;
	
while (flagPrimo == 'V' and index > 1) {
	
	if (nPrimo % index == 0) {
		flagPrimo = 'F';
	}
	index--; // Esto lo que hace es
}
	
}
