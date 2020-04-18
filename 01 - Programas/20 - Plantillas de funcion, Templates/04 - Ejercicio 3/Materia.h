/*
   Plantilla de clases.
*/

#include<iostream>

using namespace std;


template <class T>

class Materia{
	private:
		T calificacion;
	public:
		Materia(T calificacion){
			this->calificacion = calificacion;
		}
		
		T getCalificacion(){
			return calificacion;
		}
		
		void setCalificacion(T dato1){			
			this->calificacion = dato1;
		}
};
