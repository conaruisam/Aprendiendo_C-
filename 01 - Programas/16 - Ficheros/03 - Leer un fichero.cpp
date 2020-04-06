/*
    Lectura de un fichero
*/

#include<iostream>
#include<stdlib.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void leerFichero();

int main() {
	
	leerFichero();
	
	system("pause");
	return 0; 
}

void leerFichero() {
	ifstream archivoEntrada;
 
	string texto; // Entrada del fichero.
 
 archivoEntrada.open(".//00 - FICHEROS//03 - tercer programa//Entrada.txt", ios::in); // Se abre el fichero en modo lectura
 
 if(archivoEntrada.fail()){ // Si falla al intentar abrir el fichero
 	cout<<"Ha fallado al entrar al fichero "<<endl;
 	exit(1);
 }
 
 while(!archivoEntrada.eof()){ // Mientras no sea el final del archivo
 	getline(archivoEntrada, texto); // Simplemente todo lo que encuentre lo metemos en nuestra string texto.
 	
 	cout<<texto<<endl; 
 }
 
 archivoEntrada.close(); // Cerramos el fichero.


}
