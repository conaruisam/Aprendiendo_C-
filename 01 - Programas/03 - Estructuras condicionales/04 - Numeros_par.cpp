/*
			Este programa comprueba si se trata de un número par o un número impar
*/


#include <iostream>

using namespace std;

int main() {
	
	//Declaro la variable
	int numero1 = 0;
	
	// Pido al usuario el numero
	cout<<"Introduzca el numero a comprobar: ";
	 cin>>numero1;
	
	
	if (numero1%2 == 0){
		cout<<"El numero "<<numero1<<" es un numero par";
	}else {
		cout<<"El numero "<<numero1<<" es un numero impar";
	}
	
	
	return 0;
}
