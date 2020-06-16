/*
    El juego de las 8 reinas consiste en poner sobre un tablero de ajedrez ocho reinas sin que estas se amenacen entre ellas. 
				Para resolver este problema emplearemos un esquema vuelta atrás (o Backtracking)
				
				Para ello hay un array de las reinas, la posición del array representa la columna y el valor la fila.
								
*/

#include<iostream>

using namespace std;

/* 
   Tamaño del tablero de ajedrez, para poder parametrizarlo. De éste depende el número de reinas que puede haber, después de todo 
   no puede haber más de una reina en la misma columna, por que se chocarían
   
*/

const int N = 8; 
int reinas[N];

// Prototipo de funcion
void ponerReina(int, bool&);
bool valido(int);
void mostrarTablero();


int main(){
	bool solucion;
	
	ponerReina(0, solucion);
	
	if(solucion){
		cout<<"Si existe una solucion para el problema "<<endl;
		mostrarTablero();
	} else { 
	 cout<<"No existe una combinación de reinas "<<endl;
	}
	return 0;
}


void ponerReina(int i, bool &solucion){ // El i es el contador de las reinas, cuando el boolean sea true es que se han puesto todas las reinas
	int k = 0; // Inicializar el conteo de filas.
	solucion = false;
	
	do{
		// Colocamos la reina en la fila k y validamos si se podría estar ahí
		reinas[i] = k; 
		k++;
		
		mostrarTablero();
		cout<<endl;
		
		if(valido(i)){
			if(i<(N-1)){
				ponerReina(i+1, solucion);
				
				// Backtracking
				
				if(!solucion){
					reinas[i] = 0;
				}
				
			} else { // Todas las reinas se han colocado.
				solucion = true;
			}
		}
		
		
	} while(!solucion && (k<N));
	
}



bool valido(int i){
	/* 
			Función para comprobar si la reina de la comuna i no se choca con ninguna reina ya puesta
	*/
	
	bool retorno = true;
	
	for(int f=0;f<i;f++){
		retorno = retorno && (reinas[i] != reinas[f]); // Comprobar si no hay nadie más en la fila.
		
		
		/*
		  Como ya se comprueba con absolutamente todas las reinas puestas solo se comprueban en dos diagonales
		   +y+x
		   
		   -y-x
		*/
		
		retorno = retorno && ((reinas[i]-i) != (reinas[f]-f)); // Comprobar con la diagonal 1
		retorno = retorno && ((reinas[i]+i) != (reinas[f]+f)); // Comprobar con la diagonal 2
		
	}
	
	return retorno;
}



void mostrarTablero(){
	int tablero[N][N];
	
	
	// Inicializar la matriz
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			tablero[i][j] = 0;
		}
	}
	
	
	cout<<"\nMostrar el array."<<endl;
	
	
	for(int i=0;i<N;i++){
		cout<<reinas[i]<<"|";
	}
	
	cout<<endl;
	
	
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			tablero[reinas[j]][j] = 1;
		}
	}	
	
	cout<<"\nMostrando el tablero... "<<endl;
	
	for(int i=0;i<N;i++){
		cout<<"|";
		for(int j=0;j<N;j++){
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}	
	cout<<endl;
}
