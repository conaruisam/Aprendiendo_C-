#include <iostream>
#include "nMayor.h"

using namespace std;

int main(int argc, char** argv) {
	
	cout<<"El mayor de dos numeros enteros es: "<<nMayor(5,9.3)<<endl;
	cout<<"El mayor de dos numeros reales es: "<<nMayor(3.5,2.5)<<endl;
	cout<<"El mayor de dos caracteres es: "<<nMayor("a", "c")<<endl;	
	
	return 0;
}
