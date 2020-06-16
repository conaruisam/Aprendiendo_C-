/*
   
			Un caballo en un tablero de ajedrez tiene 8 pósibles movimientos, en este programa se muestra como partiendo de cualquier coordenada del tablero
			si es posible 
   
*/

#include<iostream>

using namespace std;

const int N = 8; 
int tablero[N][N]; // MATRIZ DE NUESTRO TABLERO.

int d[8][2] = {{2,1}, {1,2}, {-1, 2}, {-2,1}, {-2,-1},{-1,-2},{1,-2},{2,-1}}; // Desplazamientos relativos al caballo.

void escribirTablero(){
	int i,j;
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
}

void saltoCaballo(int i, int x, int y, bool &exito){
	int nx, ny;
	int k=0; // Contador de posibles movimientos.
	
	exito = false;
	
	do{
		
		k++;
		nx = x + d[k-1][0];
		ny = y + d[k-1][1];
		
		if((nx>=0) && (nx<N) && (ny>=0) && (ny<N) &&(tablero[nx][ny] == 0)) { // ESTE CONDICIONAL ES PARA COMPROBAR SI SON ACEPTABLES Y SI NUNCA HEMOS ENTRADO.
			// Guardamos el movimiento
			tablero[nx][ny] = i;
			
			escribirTablero(); // Mostramos como eel caballo se va moviendo
			
			if(i < N*N){ // Si el numero de movimiento por el que vamos es menor que el tamaño del tablero 
				saltoCaballo(i+1, nx, ny, exito);
				
				if(!exito){ // Si no encontró la solución, se borra la anotación
					tablero[nx][ny] = 0;
				}
			} else { // Y si recorre toda la matriz el caballo
				exito = true;
			}
		}
		
		
	} while((k<8) && !exito);
}


int main(){
	bool exito;
	// Posición inicial de mi caballo
	int fila = 2;
	int col = 2;
	
	tablero[fila][col] = 1;
	
	saltoCaballo(2, fila, col, exito);
	
	if(exito == true){
			cout<<"Hemos rellenado todas las casillas de nuestro tablero "<<endl;
	} else{
		cout<<"Camino no encontrado "<<endl;
	}
	
	
	return 0;
}
