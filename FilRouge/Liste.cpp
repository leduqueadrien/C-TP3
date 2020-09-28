
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Liste.hpp"
#include <string>
#include <iostream>

Liste::Liste() : tabC(new Cercle [taille]), tabR(new Rectangle [taille]), nbC(taille), nbR(taille) { }

std::string Liste::toString () {
    std::string chaine;
    for (int i=0; i<nbC; i++)
        chaine += tabC[i].toString() + "\n";
    
    for (int i=0; i<nbR; i++)
        chaine += tabR[i].toString() +"\n";

    return chaine;
}
