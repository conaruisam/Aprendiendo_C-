/* Escribe la siguiente expresión como expresión en C++:
   
   1.-   a/b + 1.
*/

#include <iostream>

using namespace std;

int main () {

		float  a,b;
		
		// Pedimos la entrada
		cout<<"Dame el valor de A:";cin>>a;
		cout<<"Dame el valor de B:";cin>>b;
		
		// Y lo sacamos en salida.
		float resultado = (a/b)+1;
		
	 cout.precision(2);
		cout<<"\nEl resultado es "<<resultado;

 	return 0;
}
