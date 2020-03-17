// Función strrev() - Ejercicio para comprobar si una palabra es capicúa.

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char entrada[100];
    char A[100];
    
    
    cout<<"Introduce la palabra o frase a comprobar: ";
    cin.getline(entrada, 100, '\n');
    
				strcpy(A, entrada);
				
				strrev(entrada);
							
    if (strcmp(entrada, A) == 0) {
    	cout<<"La palabra es capicua";
    } else {
    	cout<<"La palabra no es capicua";
    }
    
	getch();
	return 0;
}


