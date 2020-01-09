/*		
  Suma de arrays de numeros
*/



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 int numeros[5], sumaNumeros = 0;
 
 for (int i = 0; i<5;i++){
	cout<<"Indique los numeros a sumar: ";
 cin>>numeros[i]; 	
 }
 
	
	
	
	for (int i = 0; i<5;i++) {
		// Suma de todos los numeros dentro del array (sumando
		sumaNumeros +=numeros[i];
	};
	
	cout<<"La suma es: "<<sumaNumeros;
	 
 getch();
	return 0;
}
