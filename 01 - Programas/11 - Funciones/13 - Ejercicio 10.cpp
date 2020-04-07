// Ejercicio 10 - Tiempo

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void calcAnyos(int, int&, int&, int&);


int main() {

int totalDias,dia,mes,anyo;

 	cout<<"Introduzca los segundos :";
 	 cin>>totalDias;

 // Llamamos a la funcion que nos devuelve lo necesario.
  calcAnyos(totalDias,dia,mes,anyo);
    
    
    cout<<"Fecha actual: "<<dia<<" / "<<mes<<" / "<<anyo;
    
	getch();
	return 0;
}




void calcAnyos(int totalDias, int& dia, int& mes, int& anyo) {
	// 1-1-2000, inicio.
	int auxAnyo, auxMes, auxDia;
 
	// AÑOS
 auxAnyo = totalDias / 365;
 totalDias %= 365;
 
	// MESES
 auxMes = totalDias / 30;
 totalDias %= 30;
 
 // DIAS
 auxDia = totalDias;
 
	
	
	anyo = auxAnyo + 2000;
	mes = auxMes + 1;
	dia = auxDia +1;
	
	
	
}


