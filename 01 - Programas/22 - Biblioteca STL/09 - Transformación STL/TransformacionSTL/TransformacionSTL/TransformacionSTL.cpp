
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

// Función para transformar las letras a mayúscula.
void transformarMayus(char& letra) {
    if (letra >= 'a' && letra <= 'z') {
        letra = letra - ('a' - 'A');
    }
}

char comprobarVocal(char letra) { // el "?" es un condición, ":" sería el else.
    return (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? letra : '-';
}

int main(){
    vector<char> letras;

    // Generamos letras para el vector
    for (int i = 0; i < 10; i++) {
        letras.push_back('a' + i);
    }

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    // Desordenar un método con random_shuffle
    random_shuffle(letras.begin(), letras.end());

    cout << "\nVector desordenado " << endl;

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    // El foreach va a coger elemento por elemento del vector letra y yendo a la función transformarMayus.
    for_each(letras.begin(), letras.end(), transformarMayus);

    cout << "\nVector en mayusculas " << endl;

    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;

    cout << "\nMostrar las vocales del vector " << endl;
    // Mostrar solo las vocales.
    transform(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"), comprobarVocal);
    cout << endl;

    return 0;
}

