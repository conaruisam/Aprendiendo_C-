/*		
  Escribe un programa que calcule el valor de 1+3+5+n
*/  



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int maximo,resultado,resto;
 
	// Pedimos el máximo a llegar
	 do {
	 cout<<"Introduzca un numero impar maximo..: ";
		cin>>maximo;
		resto = maximo % 2;
		cout<<resto;
		
		cout<<"El resto es: "<<resto<<"\n";
		if (resto == 0){
			cout<<"Pon un numero impar!"<<endl;
		}
		
	} while (resto == 0);
		
		
	for (int i = 1; i<=maximo;i+=2){
		
				resultado += i;
				
			    cout<<"EL INDICE ES: "<<i<<endl;
				
		};
	
	cout<<"El resultado de la suma es: "<<resultado<<endl;
 
	getch();
	return 0;
}
