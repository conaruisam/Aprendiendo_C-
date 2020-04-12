// Implementacion de la clase DiaAnio

class DiaAnio{
	// Atributos
	private:
		int dia, mes;

 // Métodos.
	public:
		DiaAnio(int _dia, int _mes){ // Método constructor.
			dia = _dia;
			mes = _mes;
		}
		
		bool igual(DiaAnio& d); // Comprobar si la fecha es igual o distinta.
		void mostrar();
};
