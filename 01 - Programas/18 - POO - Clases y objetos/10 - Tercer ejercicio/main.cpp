/*

   Este programa permite dirigir el movimiento de un objeto dentro de un tablero y actualice su posición. los movimientos posibles son arriba, abajo, izquierda y derecha.
   Cada movimiento el programa mostrará la nueva dirección elegida y las coordenadas en las que se encuentra el objeto en el tablero.
   
*/

#include <iostream>
#include "Tablero.h"

// Prototipo de la funcion.
void menu();

int main(int argc, char** argv) {

	menu();
	
	return 0;
}

void menu(){

	Tablero* obj1; // Declaramos el objero.
	
	int x, y, opc, n;
	
	cout<<"Indique la posicion incial del objeto: "<<endl;
	cout<<"Posicion X: "; 
	 cin>>x;
	cout<<"Posicion Y: "; 
	 cin>>y;
	
	obj1 = new Tablero(x,y);
		
	
		do{
 	fflush(stdin);
		cout<<"\n\t:MENU:."<<endl;
		cout<<"1. Mover Arriba"<<endl;
		cout<<"2. Mover Abajo"<<endl;
		cout<<"3. Mover Derecha"<<endl;
		cout<<"4. Mover Izquierda"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Opcion: ";
		 cin>>opc;
		 
		if(opc >= 1 && opc <= 4){
			cout<<"Introduce el numero de posiciones que desea mover el objeto: ";
			 cin>>n;
		}
		
		switch(opc){
			case 1:
				obj1->moverArriba(n);
				break;
				
			case 2:
				obj1->moverAbajo(n);
				break;
				
			case 3:
				obj1->moverDerecha(n);
				break;
				
			case 4:
				obj1->moverIzquierda(n);
				break;
			
			case 5:
				break;
				
			default:
				cout<<"\nIntroduzca bien la opcion del menu"<<endl;
		}
		
		cout<<"\nPosicion actual (X,Y): ("<<obj1->getX()<<", "<<obj1->getY()<<")"<<endl;
		
	} while(opc != 5);


}
