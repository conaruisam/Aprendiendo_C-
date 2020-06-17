/*		
 
 Hola, probando visual studio code. 

*/



#include<iostream>

using namespace std;

int main(){

	int numero1;
	char letra[1];	

 cout<<"Introduzca una edad entre 18 - 25: ";
 cin>>edad;

	if(edad>=18 or edad <= 25){
		cout<<"Perfecto, entra en el rango";
	}else {
		cout<<"No entra en el rango";
	}
	
	
	switch(letra){
		case "a":cout<<"Por ejemplo 1";break;
		case "b":cout<<"Por ejemplo 1";break;
		case "c":cout<<"Por ejemplo 1";break;
		case "d":cout<<"Por ejemplo 1";break;
		default: cout<<"Por ejemplaso";break;
	}

	return 0;
}
