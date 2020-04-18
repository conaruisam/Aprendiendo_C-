#include<iostream>

using namespace std;

// PLantilla de funcion
// template <class A> // Si pongo uno los dos datos de abajo deberían ser del mismo tipo.
template <class A, class A2>
A nMayor(A dato1, A2 dato2){
	if(dato1 >= dato2){
		return dato1;
	} else{
	 return dato2;
	}
}
