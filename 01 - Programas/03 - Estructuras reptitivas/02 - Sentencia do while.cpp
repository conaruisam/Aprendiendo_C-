/* La sentencia dow hile

		 do{
						conjunto de instrucciones
			}while();

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	 // Iterador
		int i;
	 
		i = 10;
		
		do {
						cout<<i<<endl;
						i--; // Decrementamos el iterador, hasta que sea 1...
						
		}while(i>=1);
	
	system("pause");
	return 0;
}
