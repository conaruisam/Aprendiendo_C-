/*
   Ejercicio 1: Definir una clase DiaAnio con los atributos mes y dia, los metoddos igual()
   y visualizar(). El mes se registra como un valor entero(1 - enero, 2 - febrero..)
   El dia del mes se registra en otra variable entera 
   Escribir un programa que compruebe si una fecha es su cumpleaños.
*/
#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h"

using namespace std;

int main(int argc, char** argv) {
	
	DiaAnio* hoy;
	DiaAnio* cumple;
	
	int d,m;
	
	cout<<"Introduzca la fecha de hoy, dia: ";
	 cin>>d;

	cout<<"Introduzca la fecha de hoy, mes: ";
	 cin>>m;
	 
	hoy = new DiaAnio(d,m); // Al objeto hoy le indicamos el dia y el mes
	
	cout<<"Introduzca la fecha de tu cumple, dia: ";
	 cin>>d;

	cout<<"Introduzca la fecha de tu cumple, mes: ";
	 cin>>m;

	cumple = new DiaAnio(d,m); // Al objeto cumple le indicamos el dia  y el mes
		
	hoy->mostrar();
	cout<<endl;
	cumple->mostrar();
	
	if(hoy->igual(*cumple)){
	 cout<<"\nFeliz cumple!!!"<<endl;
	} else{
		cout<<"\nQue tenga un buen dia"<<endl;
	}
	
	return 0;
}
