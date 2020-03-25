// Plantillas de funcion.

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion
template <class TIPOD>
void mostrarAbsolute(TIPOD numero);

int main() {
	int num1 = 5;
	float num2 = 56.31;
	double num3 = -164.23;
	
	mostrarAbsolute(num1);

	mostrarAbsolute(num2);
	
	mostrarAbsolute(num3);		
	
	getch();
	return 0;
}



template <class TIPOD>
void mostrarAbsolute(TIPOD numero) {
	if (numero<0) {
		numero *= -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}

