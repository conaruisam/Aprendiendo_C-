/*
   Ejercicio 1
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int numero, *dir_numero;
		
	cout<<"Introduzca un numero: ";
	 cin>>numero;
	 
	 dir_numero = &numero; // Indicando la posición de memoria del puntero
	 
	 if (*dir_numero%2 == 0){
	 	cout<<"El numero "<<*dir_numero<<" es par"<<endl;
	 	cout<<"Posicion de memoria: "<<dir_numero<<endl;
	 } else{
	 	cout<<"El numero"<<dir_numero<<" es impar"<<endl;
	 	cout<<"Posicion de memoria: "<<dir_numero<<endl;
	 }
	
	getch();
	return 0;
}



