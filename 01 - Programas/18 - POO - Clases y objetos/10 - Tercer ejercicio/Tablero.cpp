#include<iostream>
#include "Tablero.h"

using namespace std;

void Tablero::moverArriba(int n){
	y += n;
}

void Tablero::moverAbajo(int n){
	y -= n;
}

void Tablero::moverDerecha(int n){
	x += n;
}

void Tablero::moverIzquierda(int n){
	x -= n;
}

// Metodos getter

int Tablero::getY(){
	return y;
}

int Tablero::getX(){
	return x;
}

