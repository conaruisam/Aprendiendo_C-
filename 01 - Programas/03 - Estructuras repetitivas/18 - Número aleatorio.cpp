/*
  Realiza un juego que haga un número aleatorio,
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){

	int numeroEntrada, dato, contadorErrores = 0,pruebas;
	
	srand(time(NULL));// Genera un numero aleatorio.
	dato  = 1 + rand() %(100);
	
	
	
	do {
		
		cout<<"\nDigite un numero: ";
		cin>>numeroEntrada; 
		if (dato > numeroEntrada) {
     cout<<"\nEs un numero mayor";
		} else {
			  cout<<"\nEs un numero menor";
		}
		contadorErrores++;
	} while(numeroEntrada != dato);
	
	
	cout<<"\n Felicidades lo has logrado"<<endl;
	cout<<"\n Los errores totales han sido: "<<contadorErrores<<endl;
	system("pause");
	
	
	
	return 0;
}
