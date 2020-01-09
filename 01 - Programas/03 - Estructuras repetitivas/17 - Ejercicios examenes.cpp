/*		
  En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el número de:
  a) Alumnos que aprobaron todos los exámenes.
  b) Alumnos que aprobaron al menos un examen.
  c) Alumnos que aprobaron únicamente el último examen.
*/  


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 /* nAlumnos1 = Alumnos que aprobaron todos los exámenes.
    nAlumnos2 = Alumnos que aprobaron al menos un examen.  
    nAlumnos3 = Alumnos que aprobaron únicamente el último examen.
 */
	int nAlumnos1 = 0, nAlumnos2 = 0, nAlumnos3 = 0;
	//El numero de alumnos en la clase
	int nAlumnos = 5;
 // Variables de las notas
 float nota1,nota2,nota3;
										
	for (int i = 1; i<=nAlumnos;i++){
    
				// Pedimos las notas
    
    cout<<i<<". Indique la primera nota: ";
    cin>>nota1;
    cout<<i<<". Indique la segunda nota: ";
    cin>>nota2;
    cout<<i<<". Indique la tercera nota: ";
    cin>>nota3;
    
    if (nota1 >= 5 and nota2 >= 5 and nota3 >= 5) {
    	 cout<<"\nFelicidades has aprobado!!!";
    	 // Sumamos el contador de haber aprobado todos los examenes
						nAlumnos1++;
    }
				if ((nota1 >= 5) or (nota2 >= 5) or (nota3 >= 5)) { 
	     cout<<"\nHa aprobado al menos 1 examen!!!"<<endl;
	     // Sumamos el contador de al menos un aprobado examen
						nAlumnos2++;
			 }
	   if(nota1 < 5 and nota2 < 5 and nota3 >= 5) {
	     	// Sumamos el contador de haber aprobado el último examen únicamente
	     	nAlumnos3++;
	     }
    
    
		};
		cout<<"El numero de alumnos que han aprobado todos los examenes son: "<<nAlumnos1<<endl;
		cout<<"El numero de alumnos que han aprobado al menos un examen son: "<<nAlumnos2<<endl;
		cout<<"El numero de alumnos que han aprobado el ultimo examen unicamente son: "<<nAlumnos3<<endl;
		
	getch();
	return 0;
}
