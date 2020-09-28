
#include "Forme.hpp"
#include "Point.hpp"
#include <string>
#include <sstream>

int Forme::nbForme = 0;

Forme::Forme() : Forme(0, 0, 0, 0) {}

Forme::Forme(int X, int Y, int W, int H) : point(X, Y), w(W), h(H) {
    nbForme++;
}

Forme::~Forme() {
    nbForme--;
}

int Forme::getNbForme() {
    return nbForme;
}


int Forme::getW() {
  return w;
}

int Forme::getH() {
  return h;
}

void Forme::setW(int W) {
  w = W;
}

void Forme::setH(int H) {
  h = H;
}

std::string Forme::toString() {
    std::string chaine;
    std::ostringstream oss1;
    std::ostringstream oss2;
    chaine = point.toString();
    chaine += " hauteur= ";
    oss1 << getW();
    chaine += oss1.str();
    chaine += ", largeur= ";
    oss2 << getH();
    chaine += oss2.str();

    return chaine;