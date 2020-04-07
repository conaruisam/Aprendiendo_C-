// Escribe la siguiente expresión en C++.


#include<iostream>


using namespace std;



int main() {
	// Declaramos las variables flotantes (decimales)
	float a,b,c,d,e,f;
	
	
	// Pedimos en entrada los básico.
	cout<<"\Introduzca el valor A: ";cin>>a;
	cout<<"\Introduzca el valor B: ";cin>>b;
	cout<<"\Introduzca el valor C: ";cin>>c;
	cout<<"\Introduzca el valor D: ";cin>>d;
	cout<<"\Introduzca el valor E: ";cin>>e;
	cout<<"\Introduzca el valor F: ";cin>>f;
	
	// Calculamos el resultado.
	float resultado = (a+(b/c)) / (d+(e/f));
	
	// Y lo sacamos por pantalla(Lo redondeo a 2, por ejemplo).
	cout.precision(2);
	
	cout<<"El resultado es "<<resultado;
		
	
	return 0;
}
