// Busqueda binaria, para realizar esta búsqueda el array debe estar ordenado.


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int array1[] = {1,2,3,4,5};
	
	int inf,sup,mitad,dato;
	
	char flag = 'F';
	
	dato = 1;
	
  // Algoritmo de la busqueda binaria.
  inf = 0;
  sup = 5;
	while (inf <= sup){
			 mitad = (inf+sup)/2;
			 
			 if (array1[mitad] == dato){
			 	  flag = 'V';
			 	  break;
			 }
			 
			 if (array1[mitad] > dato) {
			 	sup = mitad;
					mitad = (inf+sup)/2;
			 };
			 if(array1[mitad] < dato){
			 	inf = mitad;
			 	mitad = (inf+sup)/2;
			 };
			
		}
	
	// cout<<"\n"<<flag;
	if(flag == 'V'){
		cout<<"El: "<<dato<<" esta en: "<<mitad;
	}else{
		cout<<"No esta...";
	}
	
	
	
	getch();
	return 0;
}
