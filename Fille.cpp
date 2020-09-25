
#include "Fille.hpp"
#include <iostream>

Fille::Fille() : Mere() { }

Fille::Fille(std::string nom) : Mere(nom) {
    std::cout << "Construction Fille\n";
 }

Fille::~Fille() {
    //std::cout << "Destruction Fille\n";
}

void Fille::afficher() {
    std::cout << "Fille\n";
}