// Concatenar un string con otro Funcion strcat()

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char frase1[] = "Esto es una frase";
    char frase2[] = " de prueba";
    char frasejunta[50];
    
    
    strcpy(frasejunta, frase1); // frase1 = Esto es una frase
    
    strcat(frasejunta, frase2); // frase2 = Esto es una frase de prueba (concatena las dos variables).
    
    cout<<frasejunta;
    
    
	
	getch();
	return 0;
}


