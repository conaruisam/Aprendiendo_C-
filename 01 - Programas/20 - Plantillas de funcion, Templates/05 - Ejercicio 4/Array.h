#include<iostream>

using namespace std;

template <class T> // Declaracion de un dato generico

class Array{
	private:
		T* array;
		int indice;
		int nElementos;
		
	public:
		Array(int n){ // n = nElementos del array.
			array = new T[n]; // Array dinamico de tipo generico..
			indice = 0;
			nElementos = n;
		}
		
		~Array(){
			delete[] array;
		}
		
		void agregar(T elemento){
			array[indice++] = elemento; // Cada vez que introduzcamos algo suma el indice..
		}
		
		bool arrayLleno(){  // Metodo para comprobar si un array esta lleno
			if(indice>=nElementos){
				return true;
			} else {
				return false;
			}
		}
		
		void verArray(){
			cout<<"Mostrando los elementos del array: "<<endl;
			for (int i=0;i<indice;i++){
				cout<<"Elemento ["<<i<<"] = "<<array[i]<<endl;
			}			
		}
		
		void vaciarArray(){
			for(int i=0;i<indice;i++){
				array[i] = NULL; // Vaciar el arreglo..
			}
			indice = 0; // Restaurar el indice.
		}
};
