#include<iostream>
#include "ClaseBase.h"

using namespace std;

class claseDerivada : public ClaseBase{
	private:
		int numero2;
		
	public:
		claseDerivada(int numero, int numero2) : ClaseBase(numero){
			this->numero2 = numero2;
			cout<<"Constructor de la clase Derivada"<<endl;
		}
		
		~claseDerivada(){
			cout<<"Destructor de la clase Derivada"<<endl;
		
		}
};

