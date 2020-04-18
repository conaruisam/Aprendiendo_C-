#include<iostream>

// Plantilla

template <class N>

N intercambio(N &dato1, N &dato2){
 N aux;
 
 aux = dato1;
 dato1 = dato2;
 dato2 = aux;
 
}
