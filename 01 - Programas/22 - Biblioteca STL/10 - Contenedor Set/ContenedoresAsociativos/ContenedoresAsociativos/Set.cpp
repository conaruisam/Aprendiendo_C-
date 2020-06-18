/*
    Set & Multiset
*/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    set<int> valores;

    valores.insert(55);
    valores.insert(6);
    valores.insert(10);
    valores.insert(40);
    valores.insert(15);

    

    // Mostrar nuestro set en pantalla.
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;

    /*
        Si intento agregar valores duplicados no los añadirá.
    */

    valores.insert(6);
    valores.insert(10);

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;

    // Búsqueda de un elemento en el set.
    set<int>::iterator i = valores.find(55);

    if (i != valores.end()) {
        cout << "El elemento " << *i << " ha sido encontrado"
            << " en la posicion de memoria " << &i << endl;
        
    }
    else {
        cout << "El elemento no ha sido encontrado " << endl;
    }


    // Eliminar un elemento dentro de un set.

    valores.erase(55);
    cout << "Elemento borrado " << endl;
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
}

