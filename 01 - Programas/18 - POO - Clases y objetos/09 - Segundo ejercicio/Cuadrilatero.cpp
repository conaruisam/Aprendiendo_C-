#include<iostream>
#include "Cuadrilatero.h"

using namespace std;

float  Cuadrilatero::obtenerPerimetro(){
	float perimetro = (lado1+lado2)*2;
	
	return perimetro;
}

float Cuadrilatero::obtenerArea(){
	float area = lado1*lado2;
	
	return area;
}
