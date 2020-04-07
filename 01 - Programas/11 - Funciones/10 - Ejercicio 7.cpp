// Ejercicio 7 - Intercambio de variables.

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void intercambiarValores(int&, int&);


int main() {

int num1,num2;	

 	cout<<"Introduzca un numero en pantalla: ";
 	 cin>>num1;
 	 
 	cout<<"Introduzca un numero en pantalla: ";
 	 cin>>num2;
	
	intercambiarValores(num1,num2);
	
	cout<<"El numero 1 ahora es: "<<num1<<endl;
	cout<<"El numero 2 ahora es: "<<num2<<endl;
	
	getch();
	return 0;
}


void intercambiarValores(int& xnum, int& ynum)  {
	 int aux;
	 
	 aux = ynum;
	 ynum = xnum;
	 xnum = aux;
	 
}


