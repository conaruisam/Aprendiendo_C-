/*
   Ejercicio 3 - Crear un programa que simule un equipo de futbol (futbolista, entrenador y medico)
   
   Hacer un menú que tengan las siguientes opciones: 
   
   1 - viaje en equipo
   2 - Entrenamiento
   3 - Partido de futbol
   4 - Planificar el entrenamiento
			5 - Entrevista
			6 - Curar lesion 
  
*/

#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"

using namespace std;

Persona* equipo[4];

void viajarEquipo(){
 for(int i=0;i<4;i++)	{
 	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" estan ";
 	equipo[i]->viajar(); 	
 }
}

void entrenamiento(){
 for(int i=0;i<4;i++)	{
 	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" ";
 	equipo[i]->entrenamiento(); 	
 }
}

void partidoFutbol(){

 for(int i=0;i<4;i++)	{
 	cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" ";
 	equipo[i]->partidoFutbol();
 	cout<<endl;
 }	

}


void planificarEntrenamientoE(){
 	cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" ";
 	((Entrenador *)equipo[2])->planificarEntrenamiento(); // MUY IMPORTANTE ESTA PARTE, LO QUE ESTAMOS HACIENDO ES ENTRAR A LA CLASE ENTRENADOR PARA PODER UTILIZAR SUS METODOS. (DOWNCASTING)
 	cout<<endl;	
}

void entrevistaE(){
	cout<<equipo[0]->getNombre()<<" "<<equipo[0]->getApellido()<<" ";
 	((Futbolista *)equipo[0])->entrevista(); // MUY IMPORTANTE ESTA PARTE, LO QUE ESTAMOS HACIENDO ES ENTRAR A LA CLASE ENTRENADOR PARA PODER UTILIZAR SUS METODOS. (DOWNCASTING)
 	cout<<endl;	
 
	cout<<equipo[1]->getNombre()<<" "<<equipo[1]->getApellido()<<" ";
 	((Futbolista *)equipo[1])->entrevista(); // MUY IMPORTANTE ESTA PARTE, LO QUE ESTAMOS HACIENDO ES ENTRAR A LA CLASE ENTRENADOR PARA PODER UTILIZAR SUS METODOS. (DOWNCASTING)
 	cout<<endl;	
}

void curarLesion(){
	cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" ";
	((Medico *) equipo[3])->curarLesion();
	cout<<endl;
}
void menu(){
	int opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Viaje en equipo"<<endl;
		cout<<"2. Entrenamiento"<<endl;
		cout<<"3. Partido de futbol"<<endl;
		cout<<"4. Planificar el entrenamiento"<<endl;
		cout<<"5. Entrevista"<<endl;
		cout<<"6. Curar lesion"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Opcion: ";
		 cin>>opcion;
		 
		cout<<endl;
		
		switch(opcion){
			case 1:
				viajarEquipo();
				break;
			case 2:
				entrenamiento();
				break;
			case 3:
				partidoFutbol();
				break;
			case 4:
				planificarEntrenamientoE();
				break;
			case 5:
				entrevistaE();
				break;
			case 6:
				curarLesion();
				break;
			case 7:				
				break;
			default: cout<<"\nSe equivoco de opcion de menu"<<endl;
			 break;
		}
		system("pause");
		system("cls");
	} while(opcion != 7);
};

int main(int argc, char** argv) {
	
	// Mi equipo de 4 personas.
	equipo[0] = new Futbolista("Isam", "Zahriou", 20, 8, "Delantero centro");
	equipo[1] = new Futbolista("Paulo", "Dybala", 26, 10, "Delantero");
	equipo[2] = new Entrenador("Massimiliano", "Allegri", 50, "Defensiva");
	equipo[3] = new Medico("Alex", "Marroni", 59, "Fisioterapetura", 10);
	
	
	menu();
	
	return 0;
}



