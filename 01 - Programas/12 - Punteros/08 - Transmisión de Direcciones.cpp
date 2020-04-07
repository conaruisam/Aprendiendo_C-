/*
   Transmisión de Direcciones.
*/

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float *, float *);

int main() {
	   float num1 = 10.3, num2 = 6.78;
	   
	   cout<<"Primero Numero: "<<num1<<endl;
	   cout<<"Segundo Numero: "<<num2<<endl;
	   
	   intercambio(&num1, &num2);
	   
	   cout<<"\n\nDespues del intercambio: \n";
	   
	   cout<<"Primero Numero: "<<num1<<endl;
	   cout<<"Segundo Numero: "<<num2<<endl;
					   
	   getch();
  	 return 0;
}

void intercambio(float *dirNum1, float *dirNum2) {
	   float aux;
	   
	   // Intercambio de numeros.
	   
	   aux = *dirNum1;
	   *dirNum1 = *dirNum2;
	   *dirNum2 = aux;
	
}
