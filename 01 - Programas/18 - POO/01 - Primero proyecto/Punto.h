// Declaracion de una clase


class Punto{
	// Atributos de la calse
	private:
		int x,y;
	
	// Métodos de la calse
	public:		
		Punto(int _x, int _y){ // Constructor.
			x = _x;
			y = _y;
		}
		
		Punto(){ //Constructor, un constructor tiene l mismo nombre que la clase en C++.		
			x= y = 0;
		}
		
		void setX(int valorX); // Establecer la x
		void setY(int valorY); // Establecer la y
		
		int getX(); // Obtener el valor de X
		int getY(); // Obtener el valor de Y
};
