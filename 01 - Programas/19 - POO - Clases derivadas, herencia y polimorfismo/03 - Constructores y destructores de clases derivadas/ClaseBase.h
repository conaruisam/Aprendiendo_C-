#include<iostream>

using namespace std;

class ClaseBase{
	private:
		int numero;
		
	public: 
		ClaseBase(int numero){
			this->numero = numero;
			cout<<"Constructor de la calse base"<<endl;
		}
		
		~ClaseBase(){ // Destructor.
			cout<<"Destructor de la calse base"<<endl;
		}
};
