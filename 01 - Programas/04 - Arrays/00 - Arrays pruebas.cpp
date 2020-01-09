/*		
  Probando los arrays
*/



#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	int numeros[] = {1,5,7,3};
	char letra[] = {'a','e','i','o','u'};	
	float flotantes[] = {1.5,1.74,1.3};



  cout<<"El 1 numero: " <<numeros[0]<<endl;
  cout<<"El 2 numero: "<<numeros[1]<<endl;
  cout<<"El 3 numero: " <<numeros[2]<<endl;
  cout<<"El 4 numero: " <<numeros[3]<<endl;
  
  cout<<"\n"<<letra[0]<<endl;
  cout<<"\n"<<letra[1]<<endl;
  cout<<"\n"<<letra[2]<<endl;
  cout<<"\n"<<letra[3]<<endl;
  cout<<"\n"<<letra[4]<<endl;
  
  cout<<"\n"<<flotantes[0]<<endl;
  cout<<"\n"<<flotantes[1]<<endl;
  cout<<"\n"<<flotantes[2]<<endl;
  
 system("pause");
	return 0;
}
