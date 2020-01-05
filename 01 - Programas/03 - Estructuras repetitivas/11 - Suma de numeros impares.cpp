/*		
  Escribe un programa que calcule el valor de 1+2+3+n
*/  



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int maximo,resultado;
 
	// Pedimos el máximo a llegar
	 do {
	 cout<<"Introduzca una cifra máxima..: ";
		cin>>maximo;
		
		if (maximo <=0){
			cout<<"Pon un máximo mayor que cero"<<endl;
		}
		
	} while (maximo <= 0);
		
		
	for (int i = 1; i<=maximo;i++){
		
				resultado += i;
				
				cout<<"--------------"<<resultado<<endl;
				
		};
	
	cout<<"El resultado de la suma es: "<<resultado<<endl;
 
	getch();
	return 0;
}
