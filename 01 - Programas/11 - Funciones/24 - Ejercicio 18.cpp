/*
   Ejercicio 17.
*/


#include<iostream>
#include<conio.h>

using namespace std;

struct fecha {
	int anyo,mes,dia;
} fecha1, fecha2;

// Prototipo de la funcion
void pedirDatos();
fecha comprobarMayor(fecha, fecha);
void mostrar(fecha);

int main () {
	// Pedimos los datos
	pedirDatos();	
	
	fecha f = comprobarMayor(fecha1,fecha2);
	
	//if (fecha1 == fecha2) {
	//	 mostrar(f);
//	}
	
	
	getch();
	return 0;
}


void pedirDatos() {
	int nFechas;

		cout<<"Introduce la fecha numero 1: "<<endl;
		
		cout<<"Anyo: ";
		 cin>>fecha1.anyo;

		cout<<"Mes: ";
		 cin>>fecha1.mes;

		cout<<"Día: ";
		 cin>>fecha1.dia;

		cout<<"Introduce la fecha numero 2: "<<endl;
		
		cout<<"Anyo: ";
		 cin>>fecha2.anyo;

		cout<<"Mes: ";
		 cin>>fecha2.mes;

		cout<<"Día: ";
		 cin>>fecha2.dia;
	
}

fecha comprobarMayor(fecha f1, fecha f2) {
	
	// COMPROBAMOS LOS AÑOS
	if(f1.anyo > f2.anyo){
		 return f1;
	} else if (f1.anyo == f2.anyo) {
  // COMPROBAMOS LOS MESES
		if(f1.mes > f2.mes) {
			return f1;
		} else if (f1.mes == f2.mes) {
			 if (f1.dia > f2.dia)			 {
			 	 return f1;
			 } else if(f1.dia == f2.dia) {
			 	 cout<<"LA FECHA ES LA MISMA";
			 } else {
			 	return f2;
			 }
		} else {
			return f2;
		}
 
	} else {
		return f2;
	}
	
}
	

void mostrar (fecha f) {
	
	cout<<"\nLa fecha mayor es: "<<f.anyo<<" / "<<f.mes<<" / "<<f.dia;
}
