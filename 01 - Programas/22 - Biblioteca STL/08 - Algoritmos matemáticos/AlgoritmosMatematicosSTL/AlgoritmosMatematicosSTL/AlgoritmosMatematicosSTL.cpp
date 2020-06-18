/*
    Prueba de algunos algoritmos de la STL.
*/


#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric> // Para útilizar su función accumulate (Sumatorio de un vector)

using namespace std;

// Función para comprobar si un numero es positivo

template <class T>

bool esPositivo(T valor) {
    return (valor >= 0);
}

int main(){

    vector<float> nums;

    // Abrimos el archivo en modo lectura.
    
    ifstream archivo("numeros.txt", std::ios::in);

    // Copiar la información del archivo a mi vector nums.
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(nums));


    // Calcular el máx, mín y el promedio del vector.

    cout << "Maximo: " << *max_element(nums.begin(), nums.end()) << endl;
    cout << "Minimo: " << *min_element(nums.begin(), nums.end()) << endl;
    cout << "Promedio: " << accumulate(nums.begin(), nums.end(), 0.0)/nums.size() << endl;

    /* 
        Calcular la cantidad de numeros positivos que haya en el vector, PARAMETROS: inicio del vector, final del vector,
        y una función lógica que si se cumple suma 1 al contador
    */

    cout << "Cantidad de numeros positivos: " << count_if(nums.begin(), nums.end(), esPositivo<float>) << endl;

    return 0;
}
