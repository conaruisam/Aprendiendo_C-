/* La sentencia switch


					switch(expresion){
									case literal1:
														conjunto de instrucciones1;
														break;
									case literal2:
														conjunto de instrucciones1;
														break;
									case literal3:
														conjunto de instrucciones1;
														break;
									case literal4:
														conjunto de instrucciones1;
														break;
									default:
														conjunto de instrucciones1;
														break;
}

*/


#include <iostream>

using namespace std;




int main() {
	
	int numero;
	
	// Preguntamos el número por la consola
	cout<<"Digite un numero entre 1 y 5: \n";
	cin>>numero;

	// Y dependiendo del numero que hayamos puesto devuelve el mismo en una cadena de texto
	switch(numero){
					
					
					case 1:	cout<<"El numero que ha puesto es el 1";					break;
					case 2:	cout<<"El numero que ha puesto es el 2";					break;
					case 3:	cout<<"El numero que ha puesto es el 3";					break;
					case 4:	cout<<"El numero que ha puesto es el 4";					break;
					case 5:	cout<<"El numero que ha puesto es el 5";					break;
					default:cout<<"No has puesto un número del 1 -5"; 			break;
	}
	
	
	
	return 0;
}
