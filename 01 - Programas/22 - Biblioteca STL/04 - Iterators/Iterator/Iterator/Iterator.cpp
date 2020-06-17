#include <iostream>
#include <cstdlib>
#include <vector>

template <class Iter>
void showConsole(Iter inicio, Iter final) {
	while (inicio != final) {
		std::cout << *inicio << "|";
		inicio++;
	}
}

int main() {

	std::vector<char> letras(10);

	//Agregar elementos al vector
	for (int i = 0; i < 10; i++) {
		letras[i] = 'A' + (rand() % 26); // Genera elementos aleatorios.
	}

	showConsole(letras.begin(), letras.end());

	std::cout << std::endl;

	// Mostrar los elementos al revés
	showConsole(letras.rbegin(), letras.rend());

	std::cout << std::endl;

	showConsole(letras.begin() + 1, letras.end() - 1);
	return 0;
}