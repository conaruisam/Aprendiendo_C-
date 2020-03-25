// Ejercicio para probar el strlen

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char palabra[10];
    int  longitudPalabra = 0;
    
				cout<<"Introduce una palabra que ocupe menos de diez caracteres: ";
				gets(palabra);
    
    longitudPalabra = strlen(palabra);
    
    
    if (longitudPalabra < 11) {
    	cout<<"La palabra que has escrito es: "<<palabra<<endl;
    } else {
     cout<<"No me has hecho caso";
    }	
	
	getch();
	return 0;
}


