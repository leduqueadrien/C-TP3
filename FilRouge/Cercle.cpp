
#include "Cercle.hpp"
#include "Point.hpp"
#include <string>
#include <iostream>
#include <sstream>


Cercle::Cercle() : Cercle(0, 0, 0, 0) { }

Cercle::Cercle(int X, int Y, int W, int H) : Forme(X, Y, W, H) {}

Cercle::Cercle(int X, int Y, int rayon) : Forme(X, Y, 2*rayon, 2*rayon) {}


std::string Cercle::toString() {
    std::string chaine;
    std::ostringstream oss1;
    std::ostringstream oss2;
    chaine = "hauteur : ";
    oss1 << getW();
    chaine += oss1.str();
    chaine += ", largeur : ";
    oss2 << getH();
    chaine += oss2.str();

    return chaine;
}
