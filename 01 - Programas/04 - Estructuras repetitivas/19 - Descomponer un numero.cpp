/*
  Este programa te calcula la descomposición factorial de un número
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	int numeroEntrada = 0;
	
	do {
		
		cout<<"\nDigite un numero: ";
		cin>>numeroEntrada;
		
	} while(numeroEntrada <= 0);
	
	for(int i=2;numeroEntrada>1;i++){
		
	 while(numeroEntrada%i==0){
			    cout<<i<<" ";
			    numeroEntrada /= i;
			    
		}		
	}
	cout<<endl;
	system("pause");
 return 0;
}
