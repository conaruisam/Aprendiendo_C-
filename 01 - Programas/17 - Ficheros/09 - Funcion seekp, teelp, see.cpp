/*
    Funciones seekp(), tellp(), seekg(), tellg();
    
    FUNCIONES DE ESCRITURA:
    
    1 - seekp(), Esta función es para indicar al fichero la posicion en la que queremos escribir
    2 - teelp(), Esta funcion nos indica la posicion en la que vamos del fichero.
    
    FUNCIONES DE LECTURA:
    
    1 - seekg(),  Esta función es para indicar al fichero la posición que queremos leer.
    2 - teelg(), Esta funcion nos retorna la posición en la que estamos del fichero.
    
*/

#include<iostream>
#include<stdlib.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void escribir();
void leer();

int main() {
	
	escribir();
	leer();
	
	system("pause");
	return 0; 
}

void escribir() {
	ofstream archivo1;
	
	archivo1.open("./00 - Ficheros//09 - Noveno programa//archivo1.txt", ios::out);
	
	if(archivo1.fail()) {
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	cout<<"Posicion actual: "<<archivo1.tellp()<<endl;
	archivo1<<"Prueba del txt"<<endl;

 // Nos posiciona en la posicion que le indiquemos en el fichero.
	archivo1.seekp(11);
	archivo1<<"reemplazo: ";
	cout<<"Posicion actual: "<<archivo1.tellp()<<endl;
	
	archivo1.close();
	
}


void leer() {
	ifstream archivo2;

	archivo2.open("./00 - Ficheros//09 - Noveno programa//archivo1.txt", ios::out);
	
	if(archivo2.fail()) {
		cout<<"No se pudo crear el archivo";
		exit(1);
	}	
	
	string linea;	

	// Nos posiciona en la posicion que le indiquemos en el fichero. seekg para leer.
	archivo2.seekg(8);
	
	cout<<"Posicion actual de escritura: "<<archivo2.tellg()<<endl;
	
	getline(archivo2,linea);
	
	cout<<"\n"<<linea<<endl;
	
	archivo2.close();
	
}
