/* En este programa, voy a probar como funciona el IF en C++
			
						if(condicion) {
												Instrucciones 1
						}
						else {
						      Instrucciones 2
					 }
*/


#include<iostream>

using namespace std;


int main(){
		// Declaro las variables
		int numero1,  numero2= 25;
		
		// Pido un número por consola
		cout<<"Digite un numero: ";
	 cin>>numero1;

	 // Y utilizo el condicional propio de C++ (== Significa igual a)
	 if (numero1 == numero2){
	 	cout<<"Es igual a 25"<<endl;
	 }else {
	 	cout<<"El número que has puesto es distinto a 25"<<endl;
	 }
	 
	 // Y utilizo el condicional propio de C++ (!= Significa distinto de)
	 if (numero1 != numero2){
	 	cout<<"El numero que has puesto no es 25\n";
	 }else {
	 	cout<<"El numero que has puesto es 25\n";
	 }
	 
		// Y utilizo el condicional propio de C++ ( > Significa mayor que. < Significa menor que)
	 if (numero1 >= numero2){
	 	cout<<"El numero que has puesto es mayor a 25\n";
	 }else {
	 	cout<<"El numero que has puesto es mayor o igual 25\n";
	 }
	 
	  return 0;	
}
