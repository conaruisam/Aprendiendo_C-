// Funci�n strrev() - Funci�n para invertir una string

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char frase1[] = "Hola que tal ";
    
    
    strrev(frase1);
    
    cout<<frase1;
    
	getch();
	return 0;
}


