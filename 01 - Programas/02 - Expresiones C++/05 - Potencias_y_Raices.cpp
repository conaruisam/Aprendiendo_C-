/* Realiza un programa que calcule el valor que toma la siguiente funcion para 
unos valores dados de ex e y :*/

#include<iostream>
#include<math.h>

using namespace std;


int main() {
	
	// Declaramos las variables basicas
	float x,y, resultado = 0;
	
	// Pedimos al usuario que nos las rellene
	cout<<"\n Indique la variable x: ";cin>>x;
	cout<<"\n Indique la variable y: ";cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\n El resultado es: "<<resultado<<endl;
	
	return 0;
}
