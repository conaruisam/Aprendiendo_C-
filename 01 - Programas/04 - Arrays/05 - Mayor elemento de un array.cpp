/*		
  Mayor elemento de un array
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 int numeros[3],numeroMayor = 0;
 
 for (int i = 0; i<=2;i++){
 cout<<"\nIndique tres numeros enteros: ";
 cin>>numeros[i];
	// Sacando todos los elementos que ha metido el usuario.
		  if (numeros[i] > numeroMayor) {
		  	numeroMayor = numeros[i];
		  }
	
 }
 
	cout<<"\nEl numero mayor es: "<<numeroMayor<<endl;
	
	 
 system("pause");
	return 0;
}
