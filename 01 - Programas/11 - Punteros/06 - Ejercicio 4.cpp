/*
   Ejercicio 4.
*/

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void rellenarArray();
int comprobarMenorArray(int array[100]); 

int numeros[100], *dir_array;
int longitudArray; // Posicion del array;

int main() {
 int numeroMenor;
	// Rellenamos el array.
	
	rellenarArray();
	numeroMenor = comprobarMenorArray(numeros);
	
 cout<<"El numero menor es: "<<numeroMenor<<endl;
	getch();
	return 0;
}

void rellenarArray() {
	
	cout<<"Introduzca cuantos numeros quiere utilizar: ";
	 cin>>longitudArray;
	 
	 dir_array = numeros; // Posicion de memoria.
	 
	for(int i=0;i<longitudArray;i++) {
		cout<<"Introduzca un numero: ";
		 cin>>numeros[i];
	}
	
	
}


int comprobarMenorArray(int array[100]) {
	int arrayMenor = array[0];
	
	for(int i=0;i<longitudArray;i++) {
		if(arrayMenor > *dir_array) {
			arrayMenor = *dir_array;			
		}
		dir_array++;
	}
	
	return arrayMenor;
}
