// Ejercicio 8 - Billetes

#include<iostream>
#include<conio.h>

using namespace std;

// Protitipo de funcion


void billetera(int, int&, int&, int&, int&, int&, int&);


int main() {

int dineroTotal,bileteCien, billeteCincuenta, billeteVeinte, billeteDiez, billeteCinco, monedaUno;

 	cout<<"Introduzca el dinero que tienes: ";
 	 cin>>dineroTotal;

 // Llamamos a la funcion que nos devuelve lo necesario.
  billetera(dineroTotal,bileteCien, billeteCincuenta, billeteVeinte, billeteDiez, billeteCinco, monedaUno);
    
    
    cout<<"Tienes: "<<bileteCien      <<"      billetes de 100"<<endl;
    cout<<"Tienes: "<<billeteCincuenta<<"      billetes de 50"<<endl;
    cout<<"Tienes: "<<billeteVeinte   <<"      billetes de 20"<<endl;
    cout<<"Tienes: "<<billeteDiez     <<"      billetes de 10"<<endl;
    cout<<"Tienes: "<<billeteCinco    <<"      billetes de 5"<<endl;
    cout<<"Tienes: "<<monedaUno       <<"      monedas de 1"<<endl;
    
	getch();
	return 0;
}




void billetera(int dineroTotal, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno)  {
	
	cien = dineroTotal / 100;
	dineroTotal %= 100;
	
	cincuenta = dineroTotal / 50;
	dineroTotal %= 50;
	
	veinte = dineroTotal / 20;
	dineroTotal %= 20;
	
	diez = dineroTotal / 10;
	dineroTotal %= 10;
	
	cinco = dineroTotal / 5;
	dineroTotal %= 5;
	
	uno = dineroTotal / 1;
	dineroTotal %= 1;
	
	
	
}


