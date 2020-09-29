
#ifndef AAZERTY
#define AAZERTY

class B;

#include "B.hpp"

class A
{
private :
	int i;

public :
	void exec(int);
	void send(B*);
};

#endif