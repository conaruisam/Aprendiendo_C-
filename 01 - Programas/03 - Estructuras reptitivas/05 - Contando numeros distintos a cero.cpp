/*		
	 Realiza un programa que intente leer un cero por entrada e indique las veces que no lo ha puesto
*/



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero,i;

 do {
 	// Pido el numero cero por entrada
		cout<<"Pon el cero: ";
	 cin>>numero;
	 
 	if (numero != 0){
 				i++;
		}else {
			cout<<"Has puesto "<<i++<<" veces mal lo que te he pedido";
		}
 } while (numero != 0);
	
	
	getch();
	return 0;
}
