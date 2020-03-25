// Definición de funciones.

#include<iostream>
#include<conio.h>

using namespace std;
// Protitipo de funcion
int encontrarMayor(int x, int y);

int main() {
	int num1,num2,mayor;
  
 cout<<"Introduce el primer numero: "<<endl;
 cin>>num1;
 
 cout<<"Introduce el segundo numero: "<<endl;
 cin>>num2;
 
 mayor = encontrarMayor(num1,num2);
 
 cout<<"El numero mayor es: "<<mayor;



	getch();
	return 0;
}


// Definicion de la funcion, simplemente comprueba cual es el numero maximo
int encontrarMayor(int x, int y) {
	int numMax;
	
	if (x > y){
		numMax = x;
	} else {
		numMax = y;
	}
	
	return numMax;
}
