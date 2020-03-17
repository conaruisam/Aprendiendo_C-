/*
  Programa que calcula la suma de dos matrices 3x3
*/ 


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
// Definimos la matrices
int matriz1[3][3] = {};
int matriz2[3][3] = {};
int matriz3[3][3] = {};

int filas2, columnas2;
  
for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   filas2 = i;
		   columnas2 = a;
		cout<<"Digite un numero: ["<<i+1<<"]["<<a+1<<"]"<<" : ";
		cin>>matriz1[i][a];

		cout<<"Digite un numero: ["<<i+1<<"]["<<a+1<<"]"<<" : ";
		cin>>matriz2[i][a];		    

		matriz3[i][a] = matriz1[i][a] * matriz2[i][a];
	 
	}
}


for (int i = 0;i<3;i++) {
	for (int a = 0;a<3;a++) {
		   
        cout<<"|"<<matriz3[i][a]<<"|";   	
	}
	cout<<"\n";	
}

 
getch();
return 0;
}

