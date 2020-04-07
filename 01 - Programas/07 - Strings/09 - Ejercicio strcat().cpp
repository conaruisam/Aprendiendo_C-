// Ejercicio para utilizar el strcat.

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char frase1[] = "Hola que tal ";
    char nombre[100];
    
    cout<<"Buenos días, cual es su nombre: \n";
    gets(nombre);
    
    if (strlen(nombre) > 100){
    cout<<"Tienes un nombre muy largo";
				}else{
    strcat(frase1, nombre); // Añade el nombre a la frase 1.
    cout<<frase1;
				}
    
	getch();
	return 0;
}


