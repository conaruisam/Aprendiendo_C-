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
	
    char ejInt[] = "1554";
    char ejFloat[] = "15.54";
    
    int numeroInt = 0;
    float numeroFloat = 0;
       
    // Transforma el primer numero       
    cout<<numeroInt<<endl;    
    numeroInt = atoi(ejInt);    
    cout<<numeroInt;
    
    // Transforma 
    cout<<numeroInt<<endl;    
    numeroFloat = atof(ejFloat);    
    cout<<numeroFloat;
    
	getch();
	return 0;
}


