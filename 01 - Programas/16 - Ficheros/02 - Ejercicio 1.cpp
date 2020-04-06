/*
    02 - Ejercicio 1, escribir en un fichero las veces que necesite un usuario.
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
	ofstream archivoSalida;  // Declaracion de un fichero de salida.
	string ruta = ".//00 - FICHEROS//02 - Segundo programa//";
	string nombreArchivo; // nombre lógico del fichero
	string entradaF; // entrada del fichero.
	
	cout<<"\nIntroduzca el nombre del archivo que quiera crea..: ";
	getline(cin, nombreArchivo); 
	
	string rutaCompleta = ruta + nombreArchivo; // Quiero que todo se guarde en../00 - FICHEROS//02 - Primer programa..
	
	archivoSalida.open(rutaCompleta.c_str(), ios::out); // Abriendo el archivo. (si no existe lo crea...)
	
	if(archivoSalida.fail()) { // Si el fichero falla..
		cout<<"No se pudo abrir el archivo";		
		exit(1); 
	}
	
	char rsp;
	
	do {
		fflush(stdin);
	 cout<<"\nIntroduzca el texto del archivo: ";
	 getline(cin, entradaF);
	
	 archivoSalida<<entradaF<<endl; 
	
	 cout<<"\nDesea escribir mas en el fichero? (s/n)";
	  cin>>rsp;
	} while((rsp == 's') || (rsp == 'S'));
	

		
	archivoSalida.close(); // Cerramos el archivo.
	
}
