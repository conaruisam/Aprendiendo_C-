#include <iostream>
#include "DiaAnio.h"

using namespace std;

// Comprobamos la igualdad en las fechas
bool DiaAnio::igual(DiaAnio & d){
	if(dia==d.dia && mes==d.mes){
		return true;
	} else {
		return false;
	}
}

void DiaAnio::mostrar(){
	cout<<"\nMostrando los datos: "<<endl;
	cout<<"Mes: "<<mes<<"\nDia: "<<dia<<endl;
}
