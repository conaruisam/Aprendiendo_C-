/*		
  Secuencia de fibbonacci
*/  


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
 
	int nIteraciones = 0,n1 = 0,n2 = 1,n3 = 1;
	 
 do {
	 cout<<"Introduzca un numero de repeticiones: ";
		cin>>nIteraciones;	
		
		if (nIteraciones <=0){
			cout<<"Pon un numero mayor que cero"<<endl;
		}		
	} while (nIteraciones <= 0);

 

  
					cout<<0<<", ";
										
	for (int i = 1; i<=nIteraciones;i++){

     // cout<<"La iteracion: "<<i;
     
     // Comenzamos la secuencia, esto sería 0 + 1 = 1..
					// cout<<"\n"<<n1<<"\n"<<n2<<endl<<n3;						
					cout<<n3<<", ";
						n3 = n1 + n2;						
						n1 = n2;
						n2 = n3;	
					//cout<<" EL N2 Y EL N1: ----  "<<endl<<n2<<endl<<n1<<endl<<n3;
		};
	getch();
	return 0;
}
