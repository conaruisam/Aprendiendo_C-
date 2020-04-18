/*
   Ejercicio 4 - Definir un menu el cual deberá tener las siguientes opciones:
   
   1. Agregar un nuevo elemento al array
   2. Comprobar el espacio en el array
   3. Ver array
   4. Vaciar array
   5. Salir
   
*/

#include <iostream>
#include <stdlib.h>
#include "Array.h"

using namespace std;

void menu();

Array <char> array1(5); // ARRAY PUBLICO, este array le podemos modificar el tipo de dato como queramos.
char elementosArray;
	
int main(int argc, char** argv) {
	
	
	menu();
	
	return 0;
}



void menu(){
	
	int opcion;
	
	do{
		cout<<"\n\t.:MENU:."<<endl;
		cout<<"1. Agregar un nuevo elemento al array"<<endl;
		cout<<"2. Comprobar el espacio en el array"<<endl;
		cout<<"3. Ver array"<<endl;
		cout<<"4. Vaciar array"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Introduzca la opcion: ";
		 cin>>opcion;
		 
		 
		switch(opcion){
			case 1:
				 if(array1.arrayLleno()){
				 	cout<<"El array está lleno"<<endl;
				 } else {
				 	
				 	cout<<"\nIntroduce un elemento a agregar: ";
				 	 cin>>elementosArray;
				 	 
				 	 array1.agregar(elementosArray);
				 }
				break;
			case 2:
				 if(array1.arrayLleno()){
				 	cout<<"El array está lleno"<<endl;
				 } else {
				 	cout<<"El array aun no está lleno"<<endl;
				 }				
				break;
			case 3:
				array1.verArray();
				break;
			case 4:
				cout<<"\nVaciando el array..."<<endl;
				array1.vaciarArray();				
				break;
			case 5:				
				break;
				
			default:
				cout<<"Se ha equivocado de numero";
				break;			
		}
		system("pause");
		system("cls");
	} while (opcion!=5);
}
