// Copiar el contenido de una cadena a otra-  Funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char palabra[] = "Isam";
    char palabra2[20] = "Isam";
    
    strcpy(palabra2, palabra);
				
				cout<<palabra2;    	
	
	getch();
	return 0;
}


