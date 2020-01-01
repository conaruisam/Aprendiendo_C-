/* Vamos a probar las típicas operaciones aritméticas */


#include<iostream>;
	
using namespace std;


int main() {
	/* Declaramos las variables de entrada numero 1 y numero 2 e inicializamos 
	   la variables del resultado las operaciones aritmeticas */
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	
	// Pedimos por terminal los numeros para operar.
	cout<<"Digite un numero: ";cin>>n1;
	cout<<"Digite otro numero: ";cin>>n2;
	
	
	// Operaciones aritmeticas:
	suma  									= n1 + n2;
	resta          = n1 - n2;
	multiplicacion = n1 * n2;
	division       = n1 / n2;
	
	// Y sacamos los resultados 
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;
	
	
	return 0;
}
