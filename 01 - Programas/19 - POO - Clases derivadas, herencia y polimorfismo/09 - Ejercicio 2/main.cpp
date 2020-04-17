/*
   Ejercicio 2
   
   a) Declarar dos objetos llamados alumno Juan y alumno Pedro de tipo alumno
   b) Declarar un objeto llamado deporLuis de tipo Deportista
   c) Declarar dos objetos llamados bdAna y bd Carmen de tipo BecadoDepor
   d) Mostrar los datos de todos los objetos declarados.
   e) Actualizar el nombre de la carrera que están estudiando alumnoJuan y bdAna
   f) Actualizar el nombre del entrenador de deporLuis y bdCarmen.
   g) Actualizar el importe de la beca de bdAna y bdCarmen.
   
*/

#include <iostream>
#include "Alumno.h"
#include "Deportista.h"
#include "BecaDeporte.h"

using namespace std;

int main(int argc, char** argv) {

	// A

	Alumno* alumnoJuan = new Alumno("Ingenieria informatica");
 Alumno* alumnoPedro = new Alumno("Magisterio");
 
 // B

 Deportista* deporLuis = new Deportista("Popeye");
 
 // C
 BecaDeporte* bdAna = new BecaDeporte("Magisterio", "Homer", 1500);
 BecaDeporte* bdCarmen = new BecaDeporte("Ingenieria de software", "La roca", 1200);
 
 // D
 cout<<"\nMostrando datos de alumnoJuan: "<<endl;
 alumnoJuan->mostrarDatos();
 
 cout<<"\nMostrando datos de alumnoPedro: "<<endl;
 alumnoPedro->mostrarDatos(); 
 
 cout<<"\nMostrando datos de deporLuis: "<<endl;
 deporLuis->mostrarDatos();
 
 cout<<"\nMostrando datos de bdAna: "<<endl;
 bdAna->mostrarDatos();
 
 cout<<"\n\nMostrando datos de bdCarmen: "<<endl;
 bdCarmen->mostrarDatos();
 
 
 // E
 string nuevaCarrera;
 cout<<"\nIntroduzca la nueva carrera de Juan: ";
 getline(cin, nuevaCarrera);
 
 alumnoJuan->setNombreCarrera(nuevaCarrera);
 
 cout<<"\nIntroduzca la nueva carrera de bdAna: ";
 getline(cin, nuevaCarrera);
 
 bdAna->setNombreCarrera(nuevaCarrera);
 
 cout<<"\n-- NUEVAS CARRERAS -- ";
 cout<<"\nLa nueva carrera de alumnoJuan es: "<<alumnoJuan->getNombreCarrera()<<endl;
 cout<<"\nLa nueva carrera de bdAna es: "<<bdAna->getNombreCarrera()<<endl;
 
 // F
 string nuevoEntrenador;
 cout<<"\nIntroduzca el nuevo entrenador de deporLuis: ";
 getline(cin, nuevoEntrenador);
 
 deporLuis->setNombreEntrenador(nuevoEntrenador);
 
 cout<<"\nIntroduzca el nuevo entrenador de bdCarmen: ";
 getline(cin, nuevoEntrenador);
 
 bdCarmen->setNombreEntrenador(nuevoEntrenador);
 
 cout<<"\n-- NUEVOS ENTRENADORES -- ";
 
 cout<<"\nLa nueva carrera de alumnoJuan es: "<<deporLuis->getNombreEntrenador()<<endl;
 cout<<"\nLa nueva carrera de bdAna es: "<<bdCarmen->getNombreEntrenador()<<endl;
 
 
 // G
 float nuevoImporte;
 cout<<"\nIntroduzca el incremento del importe a bdAna: ";
  cin>>nuevoImporte;
 
 bdAna->setImporteBeca(nuevoImporte);
 
 cout<<"\nIntroduzca el incremento del importe a bdCarmen: ";
  cin>>nuevoImporte;
		 
 bdCarmen->setImporteBeca(nuevoImporte);
 
 cout<<"\n-- SUBIDA PROPORCIONAL DE IMPORTE... -- ";
 
 cout<<"\nLa nueva carrera de alumnoJuan es: "<<bdAna->getImporteBeca()<<endl;
 cout<<"\nLa nueva carrera de bdAna es: "<<bdCarmen->getImporteBeca()<<endl; 
 
 
 // Destructores
	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;
	
	return 0;
}
