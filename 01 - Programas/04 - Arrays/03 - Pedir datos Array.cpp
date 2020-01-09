/*		
  Pedir por entrada datos y almacenarlos en arrays
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 int numeros[3];
 
 for (int i = 0; i<3;i++){
	cout<<"\nIndique tres numeros enteros: ";
 cin>>numeros[i]; 	
 }
 
	
	
	
	for (int i = 0; i<3;i++) {
		// Sacando todos los elementos que ha metido el usuario.
	   cout<<"\nLos numeros que ha introducido son: "<<numeros[i];
	};
	
	
	 
 system("pause");
	return 0;
}
