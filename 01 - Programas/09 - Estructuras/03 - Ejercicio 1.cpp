/*
  Ejercicio 1 - Estructuras
*/


#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

// Definicion de la estructura
struct Corredor {
	char nombre[15];
	int  edad;
	char sexo;
	char club[10];
	char categoria[100];
} corredor[100];

int main() {
	int numeroCorredores;
	
	// DEFINICION CONSTANTES CATEGORIAS.
	char wc_juveniles[30]   = "Juveniles";
	char wc_senior[30]      = "Senior";
	char wc_Veterano[30]    = "Veterano";
	
	
	cout<<"Introduce el numero de corredores a dar de alta: ";
	cin>>numeroCorredores;
	
	for(int i=0;i<numeroCorredores;i++){
						
  fflush(stdin);
		// Nombre
		cout<<"Introduzca el nombre del corredor: ";
		cin.getline(corredor[i].nombre,15,'\n');
		
		// Edad
		cout<<"Introduzca la edad del corredor: ";
		cin>>corredor[i].edad;
		// Sexo 
		cout<<"Introduzca el sexo: ";
		cin>>corredor[i].sexo;
		
		fflush(stdin); // Vaciar el buffer
		
		// Club
		cout<<"Introduzca su club: ";
		cin.getline(corredor[i].club , 10, '\n');
		// Categoria, dependiendo de la edad.
				
		if(corredor[i].edad <= 18){
			strcpy(corredor[i].categoria, wc_juveniles);
		} else if (corredor[i].edad <= 40) {
			strcpy(corredor[i].categoria, wc_senior);
		} else {
			strcpy(corredor[i].categoria,wc_Veterano);
		}		
	};
	
	
	// Impresion de datos
	
	for(int i=0;i<numeroCorredores;i++) {
		
	 cout<<"\nDatos del corredor: "<<i+1<<endl;
	 
		cout<<"Nombre: "<<corredor[i].nombre<<endl;
		
		cout<<"Edad: "<<corredor[i].edad<<endl;
		
		cout<<"Sexo: "<<corredor[i].sexo<<endl;
				
		cout<<"Categoria: "<<corredor[i].categoria<<endl;
		
	}
	
	
	return 0;
	getch();
}

