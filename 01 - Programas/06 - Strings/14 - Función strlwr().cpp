// Función strlwr() - Función para pasar una palabra de minuscula a mayuscula.

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char frase1[] = "Hola que tal ";
    
    
    strlwr(frase1);
    
    cout<<frase1;
    
	getch();
	return 0;
}


