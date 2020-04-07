/*
  Copiar de una matriz a otra
*/


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
// Definimos la matrices
int matriz1[2][2] = {{1,2},{3,4}};

int matriz2[2][2] = {};

for (int i = 0;i<2;i++) {
	for (int a = 0;a<2;a++) {
		   
        cout<<"|"<<matriz1[i][a]<<"|";   	
        
								// RELLENAMOS LA SEGUNDA MATRIZ..
								matriz2[i][a] = matriz1[i][a];
	}
	cout<<"\n";	
}


for (int i = 0;i<2;i++) {
	for (int a = 0;a<2;a++) {
		   // Pintamos la segunda matriz...
		   
        cout<<"|"<<matriz2[i][a]<<"|";   	
	}
	cout<<"\n";	
}

 
getch();
return 0;
}


