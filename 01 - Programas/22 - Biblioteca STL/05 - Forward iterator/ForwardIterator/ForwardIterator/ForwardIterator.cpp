
/*
	Testing with the forward iterator.
*/

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <cstdlib>

using namespace std;

void tratarArchivo();
void cerrarArchivo();

// Variables públicas
vector<char> frase;
ifstream archivo;

int main() {

	tratarArchivo();

	for (int i = 0; i < frase.size(); i++) {
		cout << frase[i];
	}

	return 0;
}


void tratarArchivo() {


	archivo.open("documento.txt", ios::in);

	if (archivo.fail()) {
		cout << "No se pudo  abrir el archivo";
		exit(1);
	}

	istream_iterator<char> i(archivo); // Creando un iterador para char.


	while (!archivo.eof()) { // Mientras no sea el final del archivo.
		// Recorremos el fichero y almacenamos el caracter por el que vamos.
		frase.push_back(*i);
		
		i++;
	}
	cerrarArchivo();

}

void cerrarArchivo() {
	
	archivo.close();

}