/*

   Recursividad indirecta, 
   
*/

#include<iostream>
#include<conio.h>

using namespace std;

// Prototipos de funcion

void funcion1(char);
void funcion2(char);


int main(){
	
	cout<<"Alfabeto: "<<endl;
	
	funcion1('Z');
	
	getch();
	return 0;
}



void funcion1(char letra){
	
	if(letra > 'A'){
		funcion2(letra);
	}
	
	cout<<letra<<" ";
	
}

void funcion2(char letra){
	funcion1(--letra);
}

