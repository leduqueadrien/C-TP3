#include <iostream>
#include "Bavarde.hpp"

Bavarde::Bavarde(int n) : entier(n) {
    std::cout << "Construction\n";
}

Bavarde::Bavarde() : Bavarde(0) {}

Bavarde::~Bavarde() {
    std::cout << "Destruction\n";
}

int Bavarde::get(){
    return entier;
}

void Bavarde::afficher() {
    std::cout << "Affichage de %";
}

