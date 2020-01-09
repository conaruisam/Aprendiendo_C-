/*		
  Escribe un programa que calcule la suma de n^1 + n^2 + n^3...
*/  


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int base,exponenteMaximo = 0,resultado = 1,sumaTotal = 0;
 
	// Pedimos la base
	 do {
	 cout<<"Introduzca la base: ";
		cin>>base;	
		
		if (base <=0){
			cout<<"Pon un exponente mayor que cero"<<endl;
		}		
	} while (base <= 0);

	// Pedimos el numero exponente, que obviamente sea mayor que cero.
	 do {
	 cout<<"Introduzca el exponente maximo: ";
		cin>>exponenteMaximo;	
		
		if (exponenteMaximo <=0){
			cout<<"Pon un exponente mayor que cero"<<endl;
		}		
	} while (exponenteMaximo <= 0);
		
		// Vamos calculando la elevación
	for (int i = 1; i<=exponenteMaximo;i++){

				resultado *= base;
		// Y los vamos sumando guardando el resultado en sumaTotal..
				sumaTotal += resultado;

		};
	
	cout<<"El resultado la suma es "<<sumaTotal<<endl;
 
	getch();
	return 0;
}
