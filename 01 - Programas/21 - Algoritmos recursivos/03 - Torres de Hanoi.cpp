/*
   Torres de Hanoi - Algoritmo recursivo (Divide y vencerás)
*/

#include<iostream>
#include<math.h>

using namespace std;

void hanoi(char, char, char, int);
int calcularMovimientos(int n);
int contadorMovimientos;

int main(){
	
	int nDiscos = 3;
	
	hanoi('A','B','C', nDiscos);
	
	cout<<"\nFormula para saber los movimientos de Hanoi "<<calcularMovimientos(nDiscos)<<endl;
	cout<<"Ha habido "<<contadorMovimientos<<" movimientos "<<endl;
	
	
	return 0;
}


void hanoi(char varInicial, char varCentral, char varFinal, int n){
	
	contadorMovimientos++;
		
	if (n == 1){
		cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl;
	} else{
		hanoi(varInicial, varFinal, varCentral, n-1); // Movemos n-1 discos de la varilla inicial a la varilla final, que la utilizamos como auxiliar.
		cout<<"Mover disco "<<n<<" desde varilla "<<varInicial<<" a varilla "<<varFinal<<endl; // Y movemos el disco más grande de la varilla A a varilla C
		hanoi(varCentral,varInicial, varFinal, n-1);
	}
}





int calcularMovimientos(int n) { // LA FORMULA ES (2^N)-1.   N - Sería el numero de discos.
	
	int resultado = (pow(2,n)) - 1 ;
	
	return resultado;
}
