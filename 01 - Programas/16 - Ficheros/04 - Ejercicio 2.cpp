/*
    Ejercicio 2.
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
 
 string rutaPrincipal = ".//00 - FICHEROS//04 - cuarto programa//";
	string nombreFichero;
	string rutaCompleta;
	string texto; // Entrada del fichero.
 
 cout<<"Introduce el nombre del fichero: ";
  cin>>nombreFichero;
  
 rutaCompleta = rutaPrincipal + nombreFichero; //  ESTO ES - ---".//00 - FICHEROS//04 - tercer programa// + "X"---
 
 cout<<"\n LA RUTA COMPLETA A LA QUE ACCEDISTE ES: "<<rutaCompleta<<endl;
 
 archivoEntrada.open(rutaCompleta.c_str(), ios::in); // Se abre el fichero en modo lectura
 
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
