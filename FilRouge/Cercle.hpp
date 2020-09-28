
#ifndef CERCLE
#define CERCLE

#include <string>
#include "Point.hpp"
#include "Forme.hpp"

class Cercle : public Forme {
private:
    
public:
    Cercle();
    Cercle(int, int, int, int);
    Cercle(int, int, int);
    std::string toString();
};


#endif