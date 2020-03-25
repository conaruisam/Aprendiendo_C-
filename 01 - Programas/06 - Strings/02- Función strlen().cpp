// Función strelen()


#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){

    char palabra[] = "Isam";
    int longitud = 0;
    
    longitud = strlen(palabra);
    
    cout<<longitud;
	
	
	getch();
	return 0;
}


