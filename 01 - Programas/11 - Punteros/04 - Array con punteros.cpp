/*
   Correspondencia entre arrays y punteros   
*/

#include<iostream>
#include<conio.h>

using namespace std;




int main() {
	
	int numeros[] = {1,2,3,4,5};
	int *dir_numeros;
	
	dir_numeros = numeros;

	for(int i=0;i<5;i++){
	 cout<<"Elemento del vector	["<<i<<"]: "<<*dir_numeros++<<endl;
	 cout<<"Posiciones de memoria	["<<i<<"]: "<<dir_numeros<<endl;
	}
	
	getch();
	return 0;
}

