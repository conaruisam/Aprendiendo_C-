/*
   Punteros a estructuras.
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno {
	char nombre[30];
	int edad;
	float promedio;
} alumno[3], *puntero_alumno = alumno; //Le estamos pasando la primera posición


// Prototipos de funcion
void pedirDatos();
void buscarMejorMedia(Alumno *);

int main() {
	
	pedirDatos();
	buscarMejorMedia(puntero_alumno);
	
}


void pedirDatos() {
	for(int i=0;i<3;i++) {
		fflush(stdin);
   cout<<"\nIntroduce el nombre: ";
    cin.getline((puntero_alumno+i)->nombre,30,'\n');
    
   cout<<"Introduce la edad: ";
    cin>>(puntero_alumno+i)->edad;
    
   cout<<"Introduce el promedio: ";
    cin>>(puntero_alumno+i)->promedio;
		
	}
}

void buscarMejorMedia(Alumno *puntero_alumno) {
 float mayor=0;
   int posMayor;
   
	for(int i=0;i<3;i++) {
		if((puntero_alumno+i)->promedio > mayor) {
		     mayor = (puntero_alumno+i)->promedio;
		     posMayor = i;
		}
	}

	 cout<<"\nSu nombre: "<<(puntero_alumno+posMayor)->nombre<<endl;
	 cout<<"Su edad: "<<(puntero_alumno+posMayor)->edad<<endl;
	 cout<<"Su nota: "<<(puntero_alumno+posMayor)->promedio<<endl;
		
}

