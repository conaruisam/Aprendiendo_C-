/*		Escribe un programa que tome cada 4 horas la temperatura exterior,
			 leyendo durante un período de 24 horas. Es decir debe leer 6 temperaturas.
			 Calcula la temperatura media del día, la temperatura más alta y la más baja.
*/



#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float temperatura,mayor = 0, menor = 0;
	float sumaTotal, media;
	
	
	for(int i=0;i<24;i+=4){
		cout<<"Indica la temperatura: "<<endl;
		cin>>temperatura;
		
		if (i == 0) {
			mayor = temperatura;
			menor = temperatura;
		}
		
		if(temperatura > mayor){
			mayor = temperatura;
		} else if(temperatura < menor) {
			menor = temperatura;
		}
		sumaTotal += temperatura;
	}
	media = sumaTotal /6;
	
  cout<<"La temperatura mayor es: "<<mayor<<endl;
  cout<<"La temperatura menor es: "<<menor<<endl;
  cout<<"Le temperatura media es: "<<media<<endl;


	getch();
	return 0;
}
