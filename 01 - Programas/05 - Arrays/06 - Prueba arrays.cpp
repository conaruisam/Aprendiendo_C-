/*		
  Almacenar dos arrays en uno
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 // Declaro el array numeros.
 char letras1[] ={'a','b','c','d','e'};
 char letras2[] ={'f','g','h','i','j'};
 char letras3[10];
 
 int y = 0;
	
 // Primero almaceno  lo de el primer array 
	for (int i=0;i<5;i++){
			letras3[i] = letras1[i];
	
	}
	// Y a continuacion almaceno el segundo array 
	for(int i=5;i<10;i++){
				letras3[i] = letras2[y];
				y++;
	};
	// Lo saco todo en salida
	for (int i=0;i<10;i++){
  cout<<"\n"<<letras3[i]<<endl;
	};
	
	 
 getch();
	return 0;
}
