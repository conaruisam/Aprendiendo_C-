/*
    Archivos binarios, menu pulsaciones de un atleta.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void menu();
void escribirPulsacion();
void addPulsaciones();
void mostrarPulsaciones();

struct Registro {
	float hora;
	int pulsaciones;
};

int main() {
	
	menu();
	
	system("pause");
	return 0; 
}

void menu(){
	int opcion;
	
	do{
		cout<<"\n\t.:MENU:."<<endl;
		cout<<"1. Comenzar a introducir las pulsaciones"<<endl;
		cout<<"2. Añadir más pulsaciones"<<endl;
		cout<<"3. Mostrar las pulsaciones registradas"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Introduce una opcion: ";
		 cin>>opcion;
		 
		 switch(opcion){
		 	case 1:
		 		escribirPulsacion();
		 		break;
		 	case 2:
		 		addPulsaciones();
		 		break;
		 	case 3:
		 		mostrarPulsaciones();
		 		system("pause");
		 		break;
		 	case 4:
		 		break;
		 }
		 system("cls");
	} while(opcion != 4);
}


void escribirPulsacion(){
	ofstream archivoBinario;
	
	archivoBinario.open("./00 - Ficheros//08 - Octavo programa//ArchivosBinario.dat",ios::out | ios::binary);
	
	if(archivoBinario.fail()){
		cout<<"Error al crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulsaciones;
	
	cout<<"\nIntroduzca la hora: ";
	 cin>>pulsaciones.hora;
	cout<<"Introduce la cantidad de pulsaciones: ";
	 cin>>pulsaciones.pulsaciones;
	
	archivoBinario.write((char *)&pulsaciones, sizeof(Registro));
	
	archivoBinario.close();
}


void addPulsaciones(){
	ofstream archivoBinario;
	
	archivoBinario.open("./00 - Ficheros//08 - Octavo programa//ArchivosBinario.dat",ios::app | ios::binary);
	
	if(archivoBinario.fail()){
		cout<<"Error al crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulsaciones;
	
	cout<<"\nIntroduzca la hora: ";
	 cin>>pulsaciones.hora;
	cout<<"Introduce la cantidad de pulsaciones: ";
	 cin>>pulsaciones.pulsaciones;
	
	archivoBinario.write((char *)&pulsaciones, sizeof(Registro));
	
	archivoBinario.close();
}

void mostrarPulsaciones() {
	ifstream archivoBinario;
	
	archivoBinario.open("./00 - Ficheros//08 - Octavo programa//ArchivosBinario.dat",ios::in  | ios::binary);
	
	if(archivoBinario.fail()){
		cout<<"Error al crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulsaciones;
	cout<<"\nMostrando pulsaciones registradas...: "<<endl;
	while(!archivoBinario.eof()){ // Mientras no haya terminado de leer el archivo
		archivoBinario.read((char *)&pulsaciones, sizeof(Registro));
		
		if(!archivoBinario.eof()){ // Mientras no sea el final del archivo (para que no me duplique la ultima linea
			cout<<"Hora: "<<pulsaciones.hora<<endl;
			cout<<"Pulsaciones: "<<pulsaciones.pulsaciones<<endl;
		}
	}
	
	archivoBinario.close();	
}
