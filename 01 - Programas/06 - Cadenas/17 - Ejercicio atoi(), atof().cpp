/* Función atoi() - Transforma un string en un integer.
   Funcion atof() - Transforma un string en un float.
*/

#include<iostream>
#include<conio.h>
// Esta libreria contiene las funciones de atoi y atof
#include<stdlib.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char ejInt[100];
    char ejFloat[100];
    
    int numeroInt = 0;
    float numeroFloat = 0;
    float sumaValores;
       
    // Transforma el primer numero       
    
    cout<<"Digite el primer entero"<<endl;
    cin.getline(ejInt, 100, '\n');
    numeroInt = atoi(ejInt);    
    
    
    // Transforma 
    cout<<"Digite el segundo numero decimal: "<<endl;
    cin.getline(ejFloat, 100, '\n');
				numeroFloat = atof(ejFloat);    
				
				
				sumaValores = numeroInt + numeroFloat;
				
				cout<<"La suma de los valores es: "<<sumaValores<<endl;
    
    
	getch();
	return 0;
}


