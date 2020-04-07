/*		
  Escribe un programa que calcule x^y, donde tanto x como y son enteros positivos
*/  



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
 int base,exponente,resultado, i = 0;
	// Pedimos la base
	 do {
	 cout<<"Introduzca una base positiva: ";
		cin>>base;
		
		if (base <=0){
			cout<<"Pon una base positiva!!!"<<endl;
		}
		
	} while (base <= 0);
		
		
		
		// Pedimos el exponente
		do {
	 cout<<"Introduzca un exponente positivo: ";
		cin>>exponente;
		
			if (exponente <=0){
				cout<<"Pon un exponente positivo!!!"<<endl;
			}
			
		}while(exponente<=0);
	
	
	for (i = 2; i<=exponente;i++){
		if (i == 2) {
			resultado = base * base;
		} else{
			
				resultado *= base;
				cout<<base<<"--------------"<<resultado<<endl;
				cout<<"EL RESULTADO ES: "<< resultado<<endl;				
		};
	};
	
	cout<<"El resultado es: "<<resultado<<endl;
 
	system("pause");
	return 0;
}
