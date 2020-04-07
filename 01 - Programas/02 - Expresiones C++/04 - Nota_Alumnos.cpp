/* La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total,
la nota teórica que cuenta un 60%
y la nota de participación que cuenta un 10%

Este programa leera de entrada las tres notas y escribirá la nota final
*/


#include<iostream>

using namespace std;

int main() {
	// Declaramos las variables.
	
	float practicas;
 float teorica;
 float participacion;
 
	// Pedimos por entrada para calcular las notas.
	
	cout<<"\n Indique la nota de las practicas: ";cin>>practicas;
	cout<<"\n Indique la nota teorica: ";cin>>teorica;
	cout<<"\n Indique la nota de participacion";cin>>participacion;
	
	// Calculamos el resultado
	
	float resultado = practicas*0.3 + teorica*0.6 + participacion*0.1;
	
	// Y lo mostramos por pantalla.
	cout<<"\n El resultado es : "<<resultado;
	
	
	return 0;
}

