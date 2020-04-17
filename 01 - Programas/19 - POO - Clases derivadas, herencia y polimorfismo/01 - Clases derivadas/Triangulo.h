#include <iostream>
#include<math.h>
#include "Figura.h"
using namespace std;


class Triangulo : public Figura { // Hereda de la clase Figura.
	private:
		float lado1, lado2, lado3;
	public:
		Triangulo(int nLados, float lado1, float lado2, float lado3) : Figura(nLados){
			this->lado1 = lado1;
			this->lado2 = lado2;
			this->lado3 = lado3;
		}
		
		float areaTriangulo(){
			float p = (lado1+lado2+lado3)/2;
			float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));			
			return area;
		}
};
