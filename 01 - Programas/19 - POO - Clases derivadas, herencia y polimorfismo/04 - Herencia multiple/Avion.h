#include<iostream>

using namespace std;

class Avion{
	private:

		string modelo;
		
	public:
		
		Avion(string modelo){ // Constructor
			this->modelo = modelo;
		}

	 ~Avion(){ // Destructor
	 	
	 }
	 
	 void indicarAvion(){
	 	cout<<"El avion se desplaza por aire"<<endl;
	 }
	 
	 string getModelo(){
	 	return modelo;
	 }
};
