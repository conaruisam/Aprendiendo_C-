/*
   Ejercicio 12.
*/



#include<iostream>
#include<conio.h>


using namespace std;

// Prototipo de la funcion

void pedirDatos();

int array[100], longitudArray;

char flagOrden = 'F';
void comprobarDatosArray(int array[],int);

int main () {
	// Rellenamos la entrada
	pedirDatos();
	
	comprobarDatosArray(array,longitudArray);

	getch();
	return 0;
}


// Definicion de funciones.


void pedirDatos() {
	
	cout<<"Indique la longitud del array";
	 cin>>longitudArray;
	
	for(int i=0;i<longitudArray;i++) {
		cout<<i+1<<" Introduce el primer digito array: ";
		 cin>>array[i];
	}
}

void comprobarDatosArray(int array[],int longitud) {
	
	int aux,contador = 0;
	
				flagOrden = 'V';
 while(flagOrden == 'V' and contador<longitud ) {

			if (contador == 0) {
				aux = array[contador];
			} else if(array[contador] > aux) { // Comprobamos que siempre los datos que vayan entrado sean mayores.
				aux = array[contador];		
			} else {
				flagOrden = 'F'; 	
   }
   contador++;
	}
}


	
