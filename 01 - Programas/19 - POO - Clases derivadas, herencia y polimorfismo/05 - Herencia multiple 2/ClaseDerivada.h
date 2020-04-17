#include <iostream>
#include "ClaseBase1.h"
#include "ClaseBase2.h"


using namespace std;

class ClaseDerivada : public ClaseBase1, ClaseBase2{
	protected:
	 int x;
	public:
		ClaseDerivada(int x1, int x2, int x) : ClaseBase1(x1), ClaseBase2(x2){
			this->x = x; 
		}
		~ClaseDerivada(){
			
		}
		int getX(){
			return ClaseBase1::x; // Operador de solucion de ambito '::'.
		}
};

