// Comparar una cadena con otra  Funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "Hola";
    
    if(strcmp(palabra1,palabra2) == 0){
    	cout<<"Las palabras son las mismas";
    } else {
    	cout<<"Las palabras no son las mismas";
    }				   	
	
	getch();
	return 0;
}


