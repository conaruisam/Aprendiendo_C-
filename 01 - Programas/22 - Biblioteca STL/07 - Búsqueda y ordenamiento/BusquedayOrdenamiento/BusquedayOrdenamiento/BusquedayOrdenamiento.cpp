/*
    Algoritmos de búsqueda y ordenamiento
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstdlib>

int nAleatorios() {
    return rand() % 99;
}

// Función para identificar los numeros pares
template <class T>
bool esPar(T Valor) {
    return ((Valor % 2) == 0);
}

int main(){
    std::vector<int> valores(10);

    generate(valores.begin(), valores.end(), nAleatorios);

    copy(valores.begin(), valores.end(), std::ostream_iterator<int>(std::cout, "|"));

    // Creación de un nuevo vector.
    std:: vector<int> nPares;

    std::vector<int>::iterator  i = valores.begin();

    while ((i = find_if(i, valores.end(), esPar<int>)) != valores.end()) { // Mientras sea par o no haya terminado de leer el vector.
        nPares.push_back(*i);
        i++;
    }

    std:: sort(nPares.rbegin(), nPares.rend());

    // Mostrar el vector pares
    std::cout << "\n";
    copy(nPares.begin(), nPares.end(), std::ostream_iterator<int>(std::cout, "|"));

    return 0;
}
