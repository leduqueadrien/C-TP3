
#include <iostream>
#include <string>
#include <sstream>
#include "Rectangle.hpp"

Rectangle::Rectangle() : Rectangle(0, 0, 0, 0) {}

Rectangle::Rectangle(int X, int Y, int W, int H) : w(W), h(H) {}


std::string Rectangle::toString() {
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
