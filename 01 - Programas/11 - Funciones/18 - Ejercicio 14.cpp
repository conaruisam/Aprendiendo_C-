/*
   Ejercicio 14.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void pedirDatos();
void comprobarImpar(int array[],int);

// Variables públicas.
int array[100], longitudArray;



int main () {
	// Rellenamos la entrada
	pedirDatos();
	// Cambiamos su signo
	comprobarImpar(array,longitudArray);
 
	getch();
	return 0;
}


// Definicion de funciones.


void pedirDatos() {
	
	cout<<"Indique la longitud del array: ";
	 cin>>longitudArray;
	
	for(int i=0;i<longitudArray;i++) {
		cout<<i+1<<" Introduce el primer digito array: ";
		 cin>>array[i];
		 
		 cout<<"array[i]: -----"<<array[i]<<endl;
	}
}

void comprobarImpar(int array[],int longitud) {
	int arrayImpar[100];
	int auxArray = 0; // Este va a ser la variable que contenga la posicion del array de los impares.
	
	for(int i=0;i<longitud;i++) {
			
		 if (array[i]%2 != 0) {
		 	 arrayImpar[auxArray] = array[i];
		 	 auxArray++;
		 }
	}
	
	for(int i=0;i<auxArray;i++){
		cout<<" "<<arrayImpar[i]<<endl;
	}
}
