// Escriba un programa que intercambie los valores de dos variables

#include<iostream>

using namespace std;

int main(){
 // Declaramos la variable A y B, que vamos a intercambiar y una intermedia.
	int a = 10;
	int b = 5;
	int c= 0;
	
	cout<<"\n Introduzca la variable A:";cin>>a;
	cout<<"\n Introduzca la variable B:";cin>>b;

	// Hacemos el intercambio.
	c = a;
	a = b; 
	b = c;
	// Y lo mostramos en salida
	cout<<"\n Variable A:"<<a;
	cout<<"\n Variable B:"<<b;

}
