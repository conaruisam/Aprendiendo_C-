/*		
  Escribe un programa que calcule el valor de 1+2+3+n
*/  



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int maximo,resultado;
 
	// Pedimos el m�ximo a llegar
	 do {
	 cout<<"Introduzca una cifra m�xima..: ";
		cin>>maximo;
		
		if (maximo <=0){
			cout<<"Pon un m�ximo mayor que cero"<<endl;
		}
		
	} while (maximo <= 0);
		
		
	for (int i = 1; i<=maximo;i++){
		
				resultado += i;
				
				cout<<"--------------"<<resultado<<endl;
				
		};
	
	cout<<"El resultado de la suma es: "<<resultado<<endl;
 
	system("pause");
	return 0;
}
