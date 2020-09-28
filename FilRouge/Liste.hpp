
#ifndef LISTE
#define LISTE

#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <string>

class Liste
{
private:
    const int taille = 2;
public:
    Cercle * tabC;
    int nbC;
    int nbR;
    Rectangle * tabR;
    Liste();
    std::string toString ();
    
};

#endif