/*
  Ejercicio 7 - Pedir nombre al usuario y devolver el número de vocales que hay (con punteros).
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Prototipo de funcion
void pedirDatos();
void contarVocales(char *);
void mostrarDatos();

char nombre[30], *arrayNombre;
//Contadores de las vocales.
int cont_a, cont_e, cont_i, cont_o, cont_u;

int main() {
	   
				pedirDatos();
				
				contarVocales(arrayNombre);
				
				mostrarDatos();
				
	   getch();
  	 return 0;
}

void pedirDatos() {
	cout<<"Introduzca su nombre: ";
	 cin.getline(nombre,30,'\n');
	 
	 arrayNombre =  nombre;
	 
}

void contarVocales(char *palabra) {
	
	while(*palabra) {
		switch (*palabra) {
		  case 'A': cont_a++; break;
		  case 'E': cont_e++; break;
		  case 'I': cont_i++; break;
		  case 'O': cont_o++; break;
		  case 'U': cont_i++; break;
		  case 'a': cont_a++; break;
		  case 'e': cont_e++; break;
		  case 'i': cont_i++; break;
		  case 'o': cont_o++; break;
		  case 'u': cont_u++; break;
		}
		  palabra++;
	}
	
}

void mostrarDatos() {
	
	 cout<<"\nMostrando el numero de vocales: \n";
	 
	 cout<<"A: "<<cont_a<<endl;
	 cout<<"E: "<<cont_e<<endl;
	 cout<<"I: "<<cont_i<<endl;
	 cout<<"O: "<<cont_o<<endl;
	 cout<<"U: "<<cont_u<<endl;
	 cout<<"Posicion de memoria: "<<&arrayNombre;
		
}
