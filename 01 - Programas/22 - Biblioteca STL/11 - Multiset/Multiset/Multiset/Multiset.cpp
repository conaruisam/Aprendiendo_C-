/*
    La diferencia entre el set y el multiset, es que el multiset permite elementos duplicados mientras que el set no.
*/

#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

using namespace std;
int main(){
    multiset<int> valores;
    
    // Insertar valores al arbol binario

    valores.insert(35);
    valores.insert(-5);
    valores.insert(0);
    valores.insert(15);
    valores.insert(-120);
    valores.insert(90);
    valores.insert(85);
    valores.insert(-65);
    

    // Mostrar en pantalla el multiset
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;

    // Se pueden insertar valores ya puestos, mientras que en un set no.

    valores.insert(15);
    valores.insert(-120);



    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;

    multiset<int>::iterator i = valores.find(-120);

    if (i != valores.end()) {
        cout << "\nEl elemento ha sido encontrado" << endl;
    }
    else {
        cout << "\nEl elemento no ha sido encontrado" << endl;
    }


    // Contar el número de veces que aparece un elemento

    cout << "\nEl numero de veces que aparece el -120 es " << valores.count(-120) << endl;

    valores.erase(-120); // Elimina todos elementos que sean -120..

    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
}
