/*		Sentencia while
						while (expresion) {
											 conjunto de instrucciones;
					}
*/



#include<iostream>

// Esta librer�a nos permitir� que no se cierre automaticamente el .exe
#include<conio.h>

using namespace std;

int main(){
	int i;
	
	i = 10;
	
	while(i >=1){
				
				cout<<i<<endl;
				
				i--;
	}
	
	getch();	
	return 0;
}
