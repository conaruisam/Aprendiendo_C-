// Funci�n strupr() - Funci�n para pasar una palabra de minuscula a mayuscula.

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char frase1[] = "Hola que tal ";
    
    
    strupr(frase1);
    
    cout<<frase1;
    
	getch();
	return 0;
}


