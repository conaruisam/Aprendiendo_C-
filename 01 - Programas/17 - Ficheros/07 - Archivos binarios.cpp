/*
    Archivos binarios.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void escribir();
void leer();

struct Registro {
	char nombre[20];
	char apellido[20];
};
int main() {
	
	escribir();
	leer();
	
	system("pause");
	return 0; 
}


void escribir(){
	ofstream archivoBinario;
	
	archivoBinario.open("./00 - Ficheros//07 - Septimo programa//ArchivosBinarios.dat", ios::out | ios::binary);
	
	if(archivoBinario.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	Registro persona; // Creo una variable persona con la estructura registro.
	
	cout<<"Pidiendo datos"<<endl;
	cout<<"Introduzca el nombre: "; 
	 cin.getline(persona.nombre,20,'\n');

	cout<<"Introduzca el apellido: "; 
	 cin.getline(persona.apellido,20,'\n');
	 
	// Escribimos los datos en el fichero binario
	archivoBinario.write((char *)&persona, sizeof(Registro)); // 1. - Hay que especificarle el espacio en memoria concreto, y el 2. Es el tamaño que ocupa el registro.
	
	archivoBinario.close();
}


void leer() {
	ifstream archivoBinario;
	
	archivoBinario.open("./00 - Ficheros//07 - Septimo programa//ArchivosBinarios.dat", ios::in | ios::binary);
	
	if(archivoBinario.fail()){
		cout<<"No se pudo abrir el archivo"<<endl;
	}
	
	Registro persona; // Creo una variable persona con la estructura registro.
	
	archivoBinario.read((char *)&persona, sizeof(Registro));

 cout<<"\nMostrando los datos leidos"<<endl;
 cout<<"Nombre: "<<persona.nombre<<endl;
 cout<<"Apellido: "<<persona.apellido<<endl;

 archivoBinario.close();
}
