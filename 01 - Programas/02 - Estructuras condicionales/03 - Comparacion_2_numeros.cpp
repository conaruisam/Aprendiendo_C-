/* Este programa pide al usuario dos números e indica cual es el número mayor de los 2

*/


#include<iostream>

using namespace std;

int main() {
	
	int numero1, numero2;
	
	cout<<"Digite los dos numeros a comparar: ";
	cin>>numero1>>numero2;
	
	
	//Compruebo que sea el numero1 mayor que el numero2
	if(numero1 > numero2){
		cout<<"El numero mayor es el "<<numero1<<endl;
	} else if(numero1 == numero2){ 
	 cout<<"Ambos numeros son iguales, granuja";
	} else{
		cout<<"El numero mayor es el "<<numero2<<endl;
	}
	
	
	
	return 0;
}
