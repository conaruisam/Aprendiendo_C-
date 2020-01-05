/*	Programa que solicite en entrada un número para así poder mostrar su tabla de multiplicar

*/



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero;
	
	// Pedimos un número del 1 al 10, hasta que no nos lo dé no paramos de preguntarlo.
	do {
	cout<<"Introduzca un numero del 1 al 10: ";
	cin>>numero;
	}while((numero>10) || (numero<0));
	
	
	for(int i=1;i<=10;i++){
			
			int resultado = i*numero;
			cout<<numero<<" * "<<i<<" = "<<resultado<<endl;
	};

	
	system("pause");
	return 0;
}
