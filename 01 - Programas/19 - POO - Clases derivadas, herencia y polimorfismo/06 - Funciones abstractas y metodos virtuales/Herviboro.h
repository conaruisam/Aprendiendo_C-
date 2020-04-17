#include <iostream>
#include "Animal.h"

using namespace std;

class Herviboro : public Animal {
	public:
		void alimentarse(){
			cout<<"El animal herviboro se alimenta principalmente de plantas"<<endl;
		}
};
