/*		
  Escribe un programa que calcule el factorial de un n�mero
*/  



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int nFactorial,resultado = 1;
 
	// Pedimos el numero factoriala  trabajar con �l
	 cout<<"Introduzca un numero entero: ";
		cin>>nFactorial;	
		
		
	for (int i = 1; i<=nFactorial;i++){
		
				resultado *= i;
				
		};
	
	cout<<"El n factorial de "<<nFactorial<<" es: "<<resultado<<endl;
 
	system("pause");
	return 0;
}
