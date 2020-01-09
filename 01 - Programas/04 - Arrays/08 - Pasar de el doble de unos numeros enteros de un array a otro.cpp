
/*		
  Un programa que lee 5 numeros de un array, y copia el doble de los numeros a otro array
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 // Declaro los array primero
 int grupoint1[] ={1,2,3,4,5};
 int grupoint2[5]; 
	
 // Primero almaceno  lo de el primer array 
	for (int i=0;i<5;i++){
		
			grupoint2[i] = 2 * grupoint1[i];
			
	
	};
	
	// Lo saco todo en salida
	for (int i=0;i<5;i++){
     cout<<grupoint2[i]<<" ";
	};
	
	 
 getch();
	return 0;
}
