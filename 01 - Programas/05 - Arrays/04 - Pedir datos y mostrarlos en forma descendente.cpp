/*		
  Pedir por entrada datos y sacarlos en orden descendente
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 int numeros[3];
 
 for (int i = 0; i<=2;i++){
 cout<<"\nIndique tres numeros enteros: ";
 cin>>numeros[i];
 }
 
	
	
	
	for (int i = 2; i>=0;i--) {
		// Sacando todos los elementos que ha metido el usuario.
	   cout<<"Los numeros que ha introducido son: "<<numeros[i]<<endl;
	};
	
	
	 
 system("pause");
	return 0;
}
