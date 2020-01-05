/*		
  Escribe un programa que lea valores enteros hata que se introduzca un valor en el rango [20-30] o se introduzca el valor 0.
  El programa debe entregar la suma de los valores mayores a 0 introducidos.
*/



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int numero,suma;
	
	do {
		cout<<"Introduzca un numero entre el rango 20-30 o 0 para terminar: ";
		cin>>numero;
		if (numero >= 20 && numero <= 30){
				suma+=numero;
		}else if(numero == 0){
			cout<<"Fin...."<<endl;
		} else {
			cout<<"¡¡Introduce un numero en el rango!!"<<endl;
		} 
	} while(numero!=0);
 
 cout<<"La suma es: "<<suma<<endl;
 
	system("pause");
	return 0;
}
