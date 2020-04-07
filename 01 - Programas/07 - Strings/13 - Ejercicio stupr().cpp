// Función strupr() - Ejercicio para utilizar strupr().

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char entrada[100];
    char entrada2[100];
    
    
    cout<<"Introduce la palabra o frase a comprobar: ";
    cin.getline(entrada, 100, '\n');

    cout<<"Introduce la palabra o frase a comprobar: ";
    cin.getline(entrada2, 100, '\n');
				
				// Las paso a mayusculas.    
				strupr(entrada);
				strupr(entrada2);
				
							//Compruebo que las palabras sean iguales con el string compare.													
    if (strcmp(entrada, entrada2) == 0) {
    	cout<<"Las palabras son iguales";
    } else {
    	cout<<"Las palabras no son iguales";
    }
    
	getch();
	return 0;
}


