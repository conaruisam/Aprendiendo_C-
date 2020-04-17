#ifndef SERVIVO_H
#define SERVIVO_H
/*
   Clase abstracta. (No va a poder instanciar objetos).
*/

#include <iostream>

using namespace std;

class SerVivo{
	public:
		virtual void alimentarse() = 0;	
};

#endif
