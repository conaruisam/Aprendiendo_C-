/*
  Copiar de una transpuesta
*/


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
// Definimos la matrices
int matriz1[3][3] = {};
int matriz2[3][3] = {};


int filas2, columnas2;
  
for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   filas2 = i;
		   columnas2 = a;
		cout<<"Digite un numero: ["<<i+1<<"]["<<a+1<<"]"<<" : ";
		cin>>matriz1[i][a];
		    
	 // RELLENAMOS LA SEGUNDA MATRIZ..
		matriz2[columnas2][filas2] = matriz1[i][a];
	}
}


for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   
		   
        cout<<"|"<<matriz2[i][a]<<"|";   	
	}
	cout<<"\n";	
}

 
getch();
return 0;
}

