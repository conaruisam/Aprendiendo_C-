#include<iostream>

using namespace std;

class Barco{
	private:

		string nombre;
		
	public:
		
		Barco(string nombre){ // Constructor
			this->nombre = nombre;
		}

	 ~Barco(){ // Destructor
	 	
	 }
	 
	 void indicarBarco(){
	 	cout<<"El barco se desplaza por agua"<<endl;
	 }
	 
	 string getNombre(){
	 	return nombre;
	 }
};
