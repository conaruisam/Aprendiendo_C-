// Comparar una cadena con otra  Funcion strcmp()

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
    char palabra1[10];
    char palabra2[10];
    
    cout<<"Introduzca la palabra1: ";
    cin.getline(palabra1, 10, '\n');
    

    cout<<"Introduzca la palabra2: ";
    cin.getline(palabra2, 10, '\n');
    
    /* La salida de strcmp si es 0 es que son iguales si mayor que 0 es mayor alfabeticamente la primera palabra y si 
    es menor al reves */
    if(strcmp(palabra1,palabra2) == 0){
    	cout<<"Las palabras son las mismas";
    } else if (strcmp(palabra1,palabra2) > 0){
    	 cout<<"La palabra "<<palabra1<<" es mayor alfabeticamente que "<<palabra2;
    } else {
      cout<<"La palabra "<<palabra2<<" es mayor alfabeticamente que "<<palabra1; 	
    }
    				   	
	
	getch();
	return 0;
}


