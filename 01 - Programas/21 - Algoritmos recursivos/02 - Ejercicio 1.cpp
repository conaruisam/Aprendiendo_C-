/*
			EJERCICIO 1 - MOSTRAR LA SUMA DE LOS DIGITOS DE UN NÚMERO,
			
			
	  En este programa muestro una forma iterativa contra una forma recursiva.
	  
*/

#include<iostream>

using namespace std;


// Solucion recursiva
int sumaRecursiva(int n){
	if(n<=9){ // Si el numero es de 1 cifra
		return n;
	} else{
		return sumaRecursiva(n/10) + n%10;
	}
}

// Solucion iterativa
int sumaIterativa(int n){
	int suma = 0;
	
	while(n>9) {
		suma+= n%10;
		
		n /= 10;
	}
	
	return (suma+n);
	
}

int main(){
	
	
	int numero;
	
	
	cout<<"Introduce un numero: ";
	 cin>>numero;
	 
	
	cout<<"\nAlgoritmo recursivo "<<sumaRecursiva(numero);
	cout<<"\nAlgoritmo iterativo "<<sumaIterativa(numero);
	
	return 0;	
	
}
