// Implementacion de la clase DiaAnio

class DiaAnio{
	// Atributos
	private:
		int dia, mes;

 // M�todos.
	public:
		DiaAnio(int _dia, int _mes){ // M�todo constructor.
			dia = _dia;
			mes = _mes;
		}
		
		bool igual(DiaAnio& d); // Comprobar si la fecha es igual o distinta.
		void mostrar();
};
