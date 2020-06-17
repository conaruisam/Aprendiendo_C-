/*
    Probando el vector de STL.
*/

#include <iostream>
#include <vector>

using std::cout;

int main() {
    // Declaración del array de vector
    std::vector<int> numeros(5); // Los primeros 5 elementos se inicializan en cero.

    numeros.push_back(5); // Para agregar elementos al vector.
    numeros.push_back(10); 
    numeros.push_back(89); 

    numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 9;
    numeros[3] = 7;
    numeros[4] = 23;
    
    // Mostrar elementos del vector.

    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << "|";
    }


    numeros.pop_back(); // Te elimina el último elemento del vector.
    numeros.erase(numeros.begin()+1,numeros.begin()+3); // Eliminar elementos de las posiciones indicadas.
    numeros[2] = 7;

    cout << std::endl;

    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << "|";
    }

    return 0;
}

