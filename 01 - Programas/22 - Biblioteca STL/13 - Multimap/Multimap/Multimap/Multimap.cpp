
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

typedef pair<int, string> pareja; 

int main(){
    
    multimap<int, string> valores;

    valores.insert(pareja(3, "Isam"));
    valores.insert(pareja(1, "Luis"));
    valores.insert(pareja(5, "Rosa"));


    valores.insert(pareja(3, "Pepe")); // Como es un multimap, es posible tener varios valores en la misma calve.

    multimap<int, string>::iterator i;

    for (i = valores.begin(); i != valores.end(); i++) {
        cout << "Clave:  " << i->first << endl;
        cout << "Valor: " << i->second << endl << endl;
    }

    int clave = 3;
    
    cout << "Contador de la clave " << clave << ": " << valores.count(clave) << endl;
    cout << "Valores de la clave " << clave << ": " << endl;

    for (i = valores.lower_bound(clave); i != valores.upper_bound(clave); i++) { // EN ESTE BUCLE VA A MOSTRAR TODAS LAS COINCIDENCIAS DE LA CLAVE INDICADO EN NUESTRO MAPA VALORES.
        cout << i->second << endl;
    }
}
