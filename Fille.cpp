
#include "Fille.hpp"
#include <iostream>

Fille::Fille() : Mere(){
    std::cout << "Construction Fille\n";
}

Fille::Fille(std::string nom) : Mere(nom) { }

Fille::~Fille() {
    //std::cout << "Destruction Fille\n";
}

void Fille::afficher() {
    std::cout << "Fille\n";
}