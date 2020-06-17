/*

	Deque / Doble cola,

*/

#include <iostream>
#include <deque>

int main() {
	std::deque<char> letras;

	letras.push_front('Y'); // Agregar un elemento al inicio de la cola.
	letras.push_front('X');
	letras.push_front('W');
	
	letras.push_back('Z');  // Agregar elemento al final

	for (int i = 0; i < letras.size(); i++) {
		std::cout << letras[i] << "|";
	}

	letras.pop_front(); // Elimina un elemento del inicio de la cola
	letras.pop_back(); // Elimina un elemento del inicio de la cola
	
	std::cout << std::endl;

	for (int i = 0; i < letras.size(); i++) {
		std::cout << letras[i] << "|";
	}

	return 0;
}