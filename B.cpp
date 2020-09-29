
#include "B.hpp"

void B::exec(int n) {
	j += n;
}

void B::send(A* a) {
	(*a).exec(1);
}