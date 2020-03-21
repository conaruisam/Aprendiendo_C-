/*
  Ejercicio 7 - Estructuras
*/


#include<iostream>
#include<conio.h>

using namespace std;

// Definicion de la estructura
struct tiempo {
	int horas;
	int minutos;
	int segundos;
}tiempo[100];

int main() {
	int nEtapas     = 0;
	int totalHoras  = 0;
	int totalMins   = 0;
	int totalSecs   = 0;
	cout<<"Introduce el numero de ciclistas a dar de alta: ";
	cin>>nEtapas;
	
	for(int i=0;i<nEtapas;i++){
						
  fflush(stdin);
  
		// Horas
		cout<<"Introduzca las horas: ";
	 cin>>tiempo[i].horas;	 
	 
	 // Voy guardando en una variable la suma de horas.
	 totalHoras += tiempo[i].horas;
	 
		// Minutos
		cout<<"Introduzca los minutos: ";
	 cin>>tiempo[i].minutos;	 
	 // Voy guardando en una variable la suma de minutos.
		totalMins += tiempo[i].minutos;
		
		// Segundos
		cout<<"Introduzca los segundos: ";
	 // Voy guardando en una variable la suma de segundos.
	 cin>>tiempo[i].segundos;
	 
		totalSecs += tiempo[i].segundos;
	 	 	 
	}
	
	
	int segundos,minutos,horas;
	
	// Pasar todo de secs a mins, mins a horas..
	segundos = totalSecs % 60; // Segundos restantes;
	minutos = (totalSecs / 60) + (totalMins % 60) ;
	horas = totalHoras + (totalMins / 60);

 
		cout<<"Ha tardado "<<horas<<" horas, "<<minutos<<" minutos, "<<segundos;
		
		
	
	return 0;
	getch();
}

