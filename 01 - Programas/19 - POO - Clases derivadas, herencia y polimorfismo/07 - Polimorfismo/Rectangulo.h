#include<iostream>
#include "Poligono.h"

using namespace std;

class Rectangulo : public Poligono{
	private:
		float base, altura;
 public:
  Rectangulo(float base, float altura) {
  	this->base = base;
  	this->altura = altura;
  }
  
  float perimetro(){
  	float per = altura*2+base*2;

  	return per;
  }
  float area(){
  	float are = base * altura;
  	
  	return are;
  }
};
