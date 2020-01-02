/*		
	 Programa que hace la suma de los 10 primeros cuadrados
*/



#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main(){
	
	int i,x,resultado,resultadoFinal = 0;	
								cout<<resultadoFinal<<endl;

 for(i = 1;i<=10;i++) {
 							resultado =	i*i;
								
								cout<<resultadoFinal<<endl;
 							resultadoFinal += resultado;
	}
	
	cout<<"El resultado final es: "<<resultadoFinal;
	
	getch();
	return 0;
}
