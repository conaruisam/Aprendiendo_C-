#include<iostream>

using namespace std;

class Expediente{
	
	private:
		int nroExpediente;
	
	public:
		Expediente(int nroExpediente){ // Constructor
			this->nroExpediente = nroExpediente;
		}
		
		Expediente(){
			
		}
		
		~Expediente(){ // Destructor
			
		}

 int getNroExpediente(){
 	return nroExpediente;
 }
};
