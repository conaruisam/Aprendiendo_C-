/*
    Probando el map.
*/


#include <iostream>
#include <iterator>
#include <map>

using namespace std;

typedef pair<int, string> par;

int main(){
    map<int, string> valores; // <clave, valor>..
    
    // Insertar valores
    valores.insert(par(5, "Brian"));
    valores.insert(par(1, "Isam"));
    valores.insert(par(2, "Sandra"));

    // Generar un iterador del mapa.
    map<int, string>::iterator i;

    for (i = valores.begin(); i != valores.end(); i++) { // Para recorrer el mapa con el iterador creado.
        cout << "Clave: " << i->first << endl;
        cout << "Valor: " << i->second << endl;
        cout << endl;
    }
    cout << "\nInsertando un valor duplicado " << endl;
    valores.insert(par(1, "DUPLICATED")); // No me va a dejar, por que está duplicada, mientras que en el multimap sí que me dejaría

    for (i = valores.begin(); i != valores.end(); i++) { // Para recorrer el mapa con el iterador creado.
        cout << "Clave: " << i->first << endl;
        cout << "Valor: " << i->second << endl;
        cout << endl;
    }

    valores[1] = "Modified";

    cout << "\nModificando un valor" << endl;
    for (i = valores.begin(); i != valores.end(); i++) { // Para recorrer el mapa con el iterador creado.
        cout << "Clave: " << i->first << endl;
        cout << "Valor: " << i->second << endl;
        cout << endl;
    }


    i = valores.find(2);

    if (i != valores.end()) {
        cout << "El valor ha sido encontrado " << i->second << endl
            << "Posición de memoria " << &i << endl;
    }
    else {
        cout << "Valor no encontrado";
    }

    valores.erase(5);

    for (i = valores.begin(); i != valores.end(); i++) { // Para recorrer el mapa con el iterador creado.
        cout << "\nClave: " << i->first << endl;
        cout << "Valor: " << i->second << endl;
        cout << endl;
    }

}
