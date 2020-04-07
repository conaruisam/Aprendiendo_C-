// Función strupr() - Ejercicio para utilizar strupr().

#include<iostream>
#include<conio.h>
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char nombre[100];
    char entradaCompare[100];
    
    // CONSTANTE A.
    char WC_A = 'A';
    int contador;
    
    
    do {

    cout<<"Introduce tu nombre: ";
    cin.getline(nombre, 100, '\n');
    
    strcpy(entradaCompare, nombre);
    strupr(entradaCompare);
    
    contador++;
    
    // cout<<strupr(nombre)<<"\n"<<nombre<<endl;
    	
    } while (strcmp(entradaCompare, nombre) != 0);
       
							//Compruebo que las palabras sean iguales con el string compare.													
    if (nombre[0] == WC_A) {
    	
    	strlwr(nombre);
    	
    	cout<<"Su nombre es: "<<nombre;
    	
    } else {
    	cout<<"Su nombre es: "<<nombre;
    }
    
	getch();
	return 0;
}


