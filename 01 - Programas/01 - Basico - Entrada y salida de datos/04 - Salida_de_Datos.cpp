/* Este ser� un programa que pida varios datos de entrada
				 -- Edad
				 -- Sexo
				 -- Altura en metros
		 Y tras leerlos sacarlos en la consola */
		 
		 
#include <iostream>		 

using namespace std;


int main() {
			
		// Declaramos las variables			
		int edad;
		char sexo[10];
		float altura;
			
		
		//Pedimos los datos a almacenar
		cout<<"Introduzca la edad: ";cin>>edad;
		cout<<"Introduzca el sexo: ";cin>>sexo;
		cout<<"Introduzca el altura: ";cin>>altura;


		 // Y los sacamos en salida
		cout<<"\nLa edad es "  <<edad<<endl;
		cout<<"El sexo es "  <<sexo;
		cout<<"\nLa altura es "<<altura;


		return 0;
}
