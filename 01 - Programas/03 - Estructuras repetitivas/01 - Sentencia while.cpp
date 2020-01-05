/*		Sentencia while
						while (expresion) {
											 conjunto de instrucciones;
					}
*/



#include<iostream>

// Esta librería nos permitirá que no se cierre automaticamente el .exe
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
