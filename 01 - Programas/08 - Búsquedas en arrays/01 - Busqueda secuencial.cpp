// Busqueda secuencial


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int array1[] = {1,5,4,2,2};
	int dato = 4;
	int indice = 0,i= 0;
	char flag = 'F';

	while (flag == 'F' && (i < 5)){
		//cout<<array1[i]<<dato<<"\n";
		
		if(array1[i] == dato) {
			indice = i;
			flag = 'V';
		}
		i++;
	};
	// cout<<"\n"<<flag;
	if(flag == 'V'){
		cout<<"El: "<<dato<<" esta en: "<<indice;
	}else{
		cout<<"No esta...";
	}
	
	
	
	getch();
	return 0;
}
