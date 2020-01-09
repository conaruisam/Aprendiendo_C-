/*		
  Multiplicacion de arrays de numeros
*/



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 int numeros[5], multiplicacionNumeros = 1;
 
 for (int i = 0; i<5;i++){
	cout<<"Indique los numeros a multiplicar: ";
 cin>>numeros[i]; 	
 }
 
	
	
	
	for (int i = 0; i<5;i++) {
		// Suma de todos los numeros dentro del array (sumandose por el indice)
		multiplicacionNumeros *=numeros[i];
	};
	
	cout<<"La multiplicacion es: "<<multiplicacionNumeros;
	 
 getch();
	return 0;
}
