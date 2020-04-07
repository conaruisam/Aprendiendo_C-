/*
   Ejercicio con punteros.
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempoCiclista {
	
	int horas;
	int minutos;
	int segundos;
	
} tiempo[3], *puntero_tiempo = tiempo; //Le estamos pasando la primera posición


// Prototipos de funcion
void pedirDatos();
void sumaTiempo(tiempoCiclista *);

int main() {
	
	pedirDatos();
	sumaTiempo(puntero_tiempo);
	
}


void pedirDatos() {
	for(int i=0;i<3;i++) {
		
		fflush(stdin);
   cout<<"\nIntroduce las horas: ";
    cin>>(puntero_tiempo+i)->horas;
    
   cout<<"Introduce los minutos: ";
    cin>>(puntero_tiempo+i)->minutos;
    
   cout<<"Introduce el segundos: ";
    cin>>(puntero_tiempo+i)->segundos;
		
	}
}

void sumaTiempo(tiempoCiclista *)  {
 
	int horas    = 0;
	int minutos  = 0;
	int segundos = 0;
   
	for(int i=0;i<3;i++) {
		cout<<"INDICEEE: "<<i;
	horas    += (puntero_tiempo+i)->horas;
	minutos  += (puntero_tiempo+i)->minutos;
	segundos += (puntero_tiempo+i)->segundos;
	cout<<"INDICE    ULTIMO : "<<(puntero_tiempo+i)->horas<<endl;
	}
	if(segundos>60) {
		minutos = minutos + (segundos/60);
		segundos = segundos %60;
	}
	if(minutos>60) {
		horas = horas + (minutos/60);
		minutos = minutos %60;
	}
  // TIEMPO TOTAL.
	 cout<<"\nHoras: "<<horas<<endl;
	 cout<<"Minutos: "<<minutos<<endl;
	 cout<<"Segundos: "<<segundos<<endl;
		
}

