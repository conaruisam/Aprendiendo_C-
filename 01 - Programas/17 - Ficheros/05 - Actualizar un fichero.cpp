/*
    Actualizar un fichero.
*/

#include<iostream>
#include<stdlib.h>
#include<fstream> // Libreria principal para utilizar los ficheros.

using namespace std;

void actualizar();

int main() {
	
	actualizar();
	
	system("pause");
	return 0; 
}

void actualizar() {
	
	ofstream archivoSalida;
 
 string rutaPrincipal = ".//00 - FICHEROS//05 - quinto programa//";
	string nombreFichero;
	string rutaCompleta;
	string texto; // Entrada del fichero.
 char rpt; 
 
 
 cout<<"Introduce el nombre del fichero: ";
  cin>>nombreFichero;
  
 rutaCompleta = rutaPrincipal + nombreFichero; //  ESTO ES - ---".//00 - FICHEROS//05 - tercer programa// + "X"---
 
 cout<<"\n LA RUTA COMPLETA A LA QUE ACCEDISTE ES: "<<rutaCompleta<<endl;
 
 archivoSalida.open(rutaCompleta.c_str(), ios::app); // Abremos el archivo en modo actualizar.
 
 if(archivoSalida.fail()){ // Si falla al intentar abrir el fichero
 	cout<<"Ha fallado al entrar al fichero "<<endl;
 	exit(1);
 }
 
 do {
 	fflush(stdin);
 	
 	cout<<"\nIntroduzca la entrada en el fichero: ";
 	 cin>>texto;
 	 
 	archivoSalida<<texto<<endl; // Escribimos en el fichero...
 	
 	fflush(stdin);
 	
 	cout<<"Desea introducir algo más?: ";
 	 cin>>rpt;
 	 
 } while((rpt == 'S') || (rpt == 's'));
 
 
 archivoSalida.close(); // Cerramos el fichero.
 
}
