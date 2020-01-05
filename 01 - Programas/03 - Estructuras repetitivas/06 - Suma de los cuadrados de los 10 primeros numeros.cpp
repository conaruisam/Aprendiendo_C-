/*		
	 Programa que hace la suma de los 10 primeros cuadrados
*/



#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	
	int i,x,resultado,resultadoFinal = 0;									

 for(i = 1;i<=10;i++) {
        // Calculamos el resultado del cuadrado del numero
 							resultado =	i*i;
        // Almacenamos para el resultado final
 							resultadoFinal += resultado;
	}
	
	cout<<"El resultado final es: "<<resultadoFinal;
	
	getch();
	return 0;
}
