/*
	 Hacer un programa que simule un cajero automático con un saldo inicial de 1000 dolares
*/

#include<iostream>

using namespace std;

int main(){

	int saldoInicial = 1000,opcion;
	float plus, minus,saldo = 0;
	
	
	
	
	cout<<"\tBienvenido al cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en su cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;	
	cout<<"Opcion: "<<endl;
	cin>>opcion;

	
	switch(opcion) {
		// INGRESO DE DINERO
		case 1:
						cout<<"Digite lo que va a ingresar ";
						 	cin>>plus;
						 	saldo = saldoInicial + plus;
						cout<<"Dinero en la cuenta: "<<saldo;
		break;
		
		// RETIRADA DE DINERO		
		case 2:
						cout<<"Digite lo que va a retirar ";
						 	cin>>minus;
		
						if (minus > saldoInicial) {
							cout<<"No tiene suficiente dinero";
						}else {
						 	saldo = saldoInicial - minus;
						 cout<<"Dinero en la cuenta: "<<saldo;		
					}
		
		break;
		
		// SALIR DEL TERMINAL		
		case 3:;break;
		
		default: cout<<"Ingrese bien la opcion";	
	}
	
	return 0;
}
