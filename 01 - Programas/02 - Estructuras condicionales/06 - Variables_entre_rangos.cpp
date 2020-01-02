/*		
		Programa que pida una edad e indique si está en el rango0 de 18-25
*/



#include<iostream>

using namespace std;

int main() {

	int edad;

 cout<<"Introduzca una edad entre 18 - 25: ";
 cin>>edad;
	
	if(edad>=18 and edad <= 25){
		cout<<"Perfecto, entra en el rango";
	}else {
		cout<<"No entra en el rango";
	}


	return 0;
}
