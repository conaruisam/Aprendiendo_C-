// Ejercicio 9 - Tiempo

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void tiempo(int, int&, int&, int&);


int main() {

int totalSeg,horas,mins,segundos;

 	cout<<"Introduzca los segundos :";
 	 cin>>totalSeg;

 // Llamamos a la funcion que nos devuelve lo necesario.
  tiempo(totalSeg,horas,mins,segundos);
    
    
    cout<<"Son: "<<horas<<" horas "<<mins<<" minutos "<<segundos<<" segundos"<<endl;
    
	getch();
	return 0;
}




void tiempo(int totalSeg, int& horas, int& minutos, int& segundos) {
	
	minutos  = totalSeg / 60;
	segundos = totalSeg % 60;
	
	horas    = minutos / 60;
	minutos  = minutos % 60;
	
	
}


