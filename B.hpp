
#ifndef BAZERTY
#define BAZERTY

class A;

#include "A.hpp"

class B {
	private :
		int j;

	public :
		void exec(int);
		void send(A*);

};

#endif