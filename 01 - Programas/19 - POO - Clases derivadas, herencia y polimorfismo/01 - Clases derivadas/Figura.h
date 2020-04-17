#include <iostream>

using namespace std;

class Figura{
	private:
		int nLados;
		
	public:
		Figura(int nLados){ // Constructor1
			this->nLados = nLados;
		}
		
		~Figura(){
			
		}
		int geNLados(){
			return nLados;
		}
		
};
