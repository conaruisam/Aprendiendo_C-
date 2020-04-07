/*		Escriba un programa que lea la entrada de un caracter e indique en la salida estándar si el caracter es una vocal minuscula o no
*/



#include<iostream>

using namespace std;

int main() {
	
	char letra;
	
	
 cout<<"Introduce la letra u: ";
 cin>>letra;
 
 
 
	switch(letra){
		
		case 'u':cout<<"Has puesto la u, gracias";break;
		default :cout<<"Has puesto la "<<letra<<" borrego"; break;
	}
	
	return 0;
}
