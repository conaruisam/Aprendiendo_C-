/*		
  Escribe un programa que calcule la suma de factoriales 
*/  



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int nFactorialMax,nFactorial = 1,sumaFactorial = 0;
 
	// Pedimos el numero factorial a máximo
	 cout<<"Introduzca el numero de factoriales a sumar: ";
		cin>>nFactorialMax;	
		
		
	for (int i = 1; i<=nFactorialMax;i++){
		  // Sacamos el factorial de cada uno de los numeros
				nFactorial *= i;
				// Y los vamos sumando..
				sumaFactorial += nFactorial;				

		};
	
	cout<<"El resultado la suma es "<<sumaFactorial<<endl;
 
	system("pause");
	return 0;
}
