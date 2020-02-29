/*
  Programa que rellena una diagonal de una matriz
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
// Definimos la matriz
int matriz1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};



for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   // Solo se muestra si coincide las filas con las columnas,
     if (i == a){
        cout<<"|"<<matriz1[i][a]<<"|";   	
     } 	else {
     	  cout<<"|"<<" "<<"|";   	
     }
	}
	cout<<"\n";	
}


system("pause");
return 0;
}


