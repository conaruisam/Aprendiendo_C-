/*
   Ejercicio 3.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int numeros[5], *dir_numeros;

	for(int i=0;i<5;i++){
	 cout<<"Introduce un numero: ["<<i<<"]: ";
	  cin>>numeros[i];
	}
	
	dir_numeros = numeros; //Posicion de memoria.
	
	for(int i=0;i<5;i++){
		if(*dir_numeros %2 == 0) {
	  cout<<"POSICION DEL ARRAY ["<<i<<"]: "<<dir_numeros<<endl;
	  cout<<"POSICION DE MEMORIA: "<<dir_numeros<<endl;
		}
		dir_numeros++; // AUMENTAMOS LA POSICION DE MEMORIA PARA QUE ESTE CORRECTA.
	}	
	getch();
	return 0;
}

