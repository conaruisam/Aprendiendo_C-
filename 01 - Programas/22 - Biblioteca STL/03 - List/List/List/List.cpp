

#include <iostream>
#include <list>

int main(){

    std::list<int> datos;

    // Agregar elementos a la lista.
    datos.push_back(4);
    datos.push_back(9);
    datos.push_back(2);
    
    datos.push_front(6);
    datos.push_front(7);



    // Ordenar los elementos de forma ascendente
    datos.sort();

    // Crear un iterador para recorrer la lista
    std::list<int>::iterator i;

    i = datos.begin();

    while (i != datos.end()) { // Recorremos los datos de la lista a través del puntero.
        std::cout << *i << "|";

        i++;
    }

    std::cout << std::endl;

    datos.pop_back();
    datos.pop_front();

    i = datos.begin();

    while (i != datos.end()) { // Recorremos los datos de la lista a través del puntero.
        std::cout << *i << "|";

        i++;
    }

}


