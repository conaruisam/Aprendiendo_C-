/*
    Escribir un fichero en C++
*/

#include<iostream>
#include<stdlib.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void escribir();

int main() {
	
	escribir();
	
	system("pause");
	return 0; 
}


void escribir() {
	ofstream archivo;  // Declaracion de un fichero de salida.
	string ruta = ".//00 - FICHEROS//01 - Primer programa//";
	string nombreArchivo, entradaF;
	
	
	cout<<"\nIntroduzca el nombre del archivo que quiera crea...";
	getline(cin, nombreArchivo); 
	
	string rutaCompleta = ruta + nombreArchivo; // Quiero que todo se guarde en../00 - FICHEROS//01 - Primer programa..
	
	archivo.open(rutaCompleta.c_str(), ios::out); // Abriendo el archivo. (si no existe lo crea...)
	
	if(archivo.fail()) { // Si es un true, entonces ha fallado la creación del archivo..
		cout<<"No se pudo abrir el archivo";		
		exit(1); // Procedente de la stdlib.h, sale del programa devolviendo un 1..
	}
	
	
	cout<<"\nIntroduzca el texto del archivo: ";
	getline(cin, entradaF);
	
	// Simplemente lo que escribe..
	archivo<<entradaF<<endl; // Reemplaza lo que hay en el fichero..
		
	archivo.close(); // Cerramos el archivo.
	
}
