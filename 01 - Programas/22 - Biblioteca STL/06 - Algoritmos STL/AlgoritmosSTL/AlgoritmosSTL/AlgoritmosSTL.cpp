/*
    Algoritmos en la STL.
*/

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <cstdlib>

int nAleatorios() { // Esta función te retorna un número del 1-10
    return rand() % 10;
}
int main(){

    std::list<int> valores(15);


    generate(valores.begin(), valores.end(), nAleatorios); // Me genera numeros aleatorios a la lista.

    // Mostrando los elementos de la lista.
    std::ostream_iterator<int> salida(std::cout, "|");
    copy(valores.begin(), valores.end(), salida);

    // Búsqueda en la lista un 8, te retorna el iterador de donde está
    std::list<int>::iterator i;
    i = find(valores.begin(), valores.end(), 8);

    // Analziar si i no sobrepasa el rango de la lista
    if (i != valores.end()) {
        std::cout << "\nEl iterador ha sido encontrado "<< *i<<std::endl;
    }
    else
    {
        std::cout << "\nEl elemento no ha sido encontrado"<<std::endl;
    }
}

