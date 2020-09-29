
#include "Fille.hpp"
#include <iostream>

Fille::Fille() : Mere() { }

Fille::Fille(std::string nom) : nom(nom) {
    nbFille ++;
 }

Fille::~Fille() {
    nbFille --;
}

std::string Fille::getName(){
    return nom;
}

int Fille::nbFille=0;