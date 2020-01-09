/*		
  Escribe un programa que calcule la suma de 1-2+3-4+5-6..
*/  


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 int nMaximo,n1 = 1,n2 = 2;
 int nIterativo = n1 - n2;
 do {
	 cout<<"Introduzca el numero maximo: ";
		cin>>nMaximo;	
		
		if (nMaximo <=0){
			cout<<"Pon un numero mayor que cero"<<endl;
		}		
	} while (nMaximo <= 0);

	// 1-2 - Empieza restando
	for (int i = 2; i<=nMaximo;i++){

		
		if(i % 2 == 0) {
			nIterativo += i;
		} else {
			nIterativo -= i;
		}
    cout<<"Salimos del bucle siendo: "<<nIterativo<<endl;
		};
	
	cout<<"El nIterativo es "<<nIterativo<<endl;
 
	getch();
	return 0;
}
