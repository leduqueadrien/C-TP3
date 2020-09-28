
#include "Forme.hpp"
#include "Point.hpp"

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
