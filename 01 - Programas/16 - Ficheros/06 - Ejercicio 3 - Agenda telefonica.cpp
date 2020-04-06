/*
    Agenda telefonica.
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void menu();
void crear_Agenda();
void agregar_Contactos();
void verContactos();

struct Contacto {
	string nombre,apellido, telefono;
} contacto;

int main() {
	
	menu();
	
	system("pause");
	return 0; 
}

void menu() {
	int opcion;
	
	do {
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Crear(Nombre, apellidos, telefono)"<<endl;
		cout<<"2. Agregar mas contactos"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		 cin>>opcion;
		 
		 switch(opcion) {
		 	case 1:
		 		crear_Agenda();
		 		break;
		 	case 2:
		 		agregar_Contactos();
		 		break;
		 	case 3:
		 		verContactos();
		 		system("pause");
		 		break;
		 }
		system("cls");
	} while(opcion != 4);
}


void crear_Agenda(){
	ofstream archivo;
	
	archivo.open("./00 - Ficheros//06 - Sexto programa//AgendaTelefonica.txt",ios::out); // Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica"<<endl;

	char rpt;
	
	do{
		fflush(stdin);
		
		cout<<"Introduzca el nombre: ";
		getline(cin,contacto.nombre);
		
		cout<<"Introduzca el apellido: ";
		getline(cin,contacto.apellido);
		
		cout<<"Introduzca el telefono: ";
		getline(cin,contacto.telefono);
		
		
		archivo<<"Nombre: "<<contacto.nombre<<endl;
		archivo<<"Apellido: "<<contacto.apellido<<endl;
		archivo<<"Telefono: "<<contacto.telefono<<endl;
		
		archivo<<"------------------"<<endl;
		
		cout<<"\nDesea agregar un contacto mas(s/n) ";
		 cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close();
	
}



void agregar_Contactos() {
	ofstream archivo;
	
	archivo.open("./00 - Ficheros//06 - Sexto programa//AgendaTelefonica.txt",ios::app); // Abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo crear el archivo";
		exit(1);
	}

	char rpt;
	
	do{
		fflush(stdin);
		
		cout<<"Introduzca el nombre: ";
		getline(cin,contacto.nombre);
		
		cout<<"Introduzca el apellido: ";
		getline(cin,contacto.apellido);
		
		cout<<"Introduzca el telefono: ";
		getline(cin,contacto.telefono);
		
		
		archivo<<"Nombre: "<<contacto.nombre<<endl;
		archivo<<"Apellido: "<<contacto.apellido<<endl;
		archivo<<"Telefono: "<<contacto.telefono<<endl;
		
		archivo<<"------------------"<<endl;
		
		cout<<"\nDesea agregar un contacto mas(s/n) ";
		 cin>>rpt;
		 
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close();	
}


void verContactos() {
	string texto;
	ifstream archivo;
	
	archivo.open("./00 - Ficheros//06 - Sexto programa//AgendaTelefonica.txt", ios::in);
	 
 while(!archivo.eof()){ // Mientras no sea el final del archivo
 	getline(archivo, texto); // Simplemente todo lo que encuentre lo metemos en nuestra string texto.
 	
 	cout<<texto<<endl; 
 }
 
 archivo.close(); // Cerramos el fichero.

}
