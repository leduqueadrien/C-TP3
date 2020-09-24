
#include "Famille.hpp"
#include <stdlib.h>

Famille::Famille(int n) : tab(new Bavarde [n<0?0:n]){

}

Famille::~Famille() {
    delete [] tab;
}