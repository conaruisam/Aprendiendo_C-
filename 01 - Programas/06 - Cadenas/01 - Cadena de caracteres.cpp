// Cadena de caracteres


#include<iostream>
#include<conio.h>
// Libreria para cadena de caracteres
#include<string.h>

//Para pedir entrada en la consola
using namespace std;

int main(){
	
//	char palabra[] = "Isam";
//	char segundaPalabra[] = {'I', 's', 'a', 'm'};
// PROBAMOS EL CIN
	char nombre1[30];
// PROBAMOS EL GETS	
	char nombre2[30];
// PROBAMOS EL GETLINE
	char nombre3[30];
	int vacio = 0;
	
	//CIN
	cout<<"(CIN)Indique su nombre: ";
	cin>>nombre1
	
	cout<<"SU NOMBRE ES: "<<nombre1<<endl;
	cout<<"\n";
	//GETS
	cout<<"(GETS)Indique su nombre: ";
	gets(nombre2);
	cout<<"SU NOMBRE ES: "<<nombre2<<endl;
	cout<<"\n";	
	//GETLINE	
	cout<<"(GETLINE)Indique su nombre: ";
	cin.getline(nombre3,30,'\n');
	cout<<"\n";
	
	cout<<"SU NOMBRE ES: "<<nombre3<<endl;
	


	
	
	getch();
	return 0;
}


