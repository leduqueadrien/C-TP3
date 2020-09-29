
#include "A.hpp"


void A::exec(int n) {
	i += n;
}

void A::send(B* b) {
	(*b).exec(1);
}