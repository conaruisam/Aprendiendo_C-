// Copiar el contenido de una cadena a otra-  Funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char palabra[20];
    char palabra2[20];
    
    cout<<"Indique su nombre: ";
    cin.getline(palabra, 20, '\n');
    
    if(strlen(palabra) > 20){
    	strcpy(palabra2,palabra);    	
    	cout<<palabra2;
    } else {
    	cout<<"Maximo 20 caracteres";
    }				   	
	
	getch();
	return 0;
}


