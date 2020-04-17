/*
   Tipos de herencia. (Pública, privada y protegida)
*/

#include <iostream>
#include "Turismo.h"
#include "Deportivo.h"
#include "Furgoneta.h"

using namespace std;



int main(int argc, char** argv) {	
	// Tienes accesoa  todos los datos de la herencia.
 cout<<"- Herencia publica - "<<endl;
 
 Turismo* t1 = new Turismo("Seat", "Negro", "Leon", 5);
 
	cout<<"Color: "<<t1->getColor()<<endl;
 cout<<"Modelo: "<<t1->devolverModelo()<<endl;
 // t1->mostrarDatos();
 
 
 cout<<"\n- Herencia privada - "<<endl;
 
 Deportivo* d1 = new Deportivo("Lamborghini", "Rojo", "Murcielago", 1600);
 // Lo unico que podemos acceder de esta clase es la cilindrada, por es el unico metodo publico y la herencioa es privada
 cout<<"Cilindrada: "<<d1->getCilindrada()<<endl;
 	
 // Cuando la herencia es protegida, los metodos de la clase heredada los puede utilizar y nosotros usar la clase protegida heredada para obtenerlos. (En este caso Furgoneta.h)
 cout<<"\n- Herencia protegida - "<<endl;
 Furgoneta* f1 = new Furgoneta("Mercedes", "Gris", "Citan", 1300);
 
 cout<<"Carga: "<<f1->getCarga()<<endl; // Solo podria mostrar la carga, los demás metodos están protegidos
 cout<<"Color: "<<f1->obtenerColor()<<endl;
 
 // Destructores.
 delete t1; 
 delete d1;
 delete f1;
 
	return 0;
}
