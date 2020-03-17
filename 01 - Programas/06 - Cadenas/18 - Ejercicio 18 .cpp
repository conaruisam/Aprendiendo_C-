/* Ejercicio ver cuantas vocales tiene una entrada
*/

#include<iostream>
#include<conio.h>
// Esta libreria contiene las funciones de atoi y atof
#include<stdlib.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
    char entrada[100];
    
    int wkcontador_a = 0;
    int wkcontador_e = 0;
    int wkcontador_i = 0;
    int wkcontador_o = 0;
    int wkcontador_u = 0;
    int X = 0;
       
    // Transforma el primer numero       
    
    cout<<"Digite el primer entero"<<endl;
    cin.getline(entrada, 100, '\n');
    
    
   // COMPROBAMOS SI TIENE VOCAL EN LA ENTRADA Y SI ES ASÍ, SUMAMOS EL CONTADOR CORRESPONDIENTE.
	for (int i=0;i<100;i++){			
		switch(entrada[i]) {
		case 'a': wkcontador_a++; break;	
		case 'e': wkcontador_e++; break;
		case 'i': wkcontador_i++; break;
		case 'o': wkcontador_o++; break;
		case 'u': wkcontador_u++; break;
		default: X; break;
	}

};
		
		
		//Estadisticas
		cout<<"CONTADOR VOCAL A: "<<wkcontador_a<<endl;
		cout<<"CONTADOR VOCAL E: "<<wkcontador_e<<endl;
		cout<<"CONTADOR VOCAL I: "<<wkcontador_i<<endl;
		cout<<"CONTADOR VOCAL O: "<<wkcontador_o<<endl;
		cout<<"CONTADOR VOCAL U: "<<wkcontador_u<<endl;    
	getch();
	return 0;
}


