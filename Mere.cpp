
#include "Mere.hpp"
#include <iostream>

Mere::Mere() {
    n++;
    std::cout << "Contruction Mere n = " << getN() << "\n";
}

Mere::Mere(std::string nom) : nom(nom) { }

Mere::~Mere() {
    n--;
    //std::cout << "Destruction Mere n = " << getN() << "\n";
}

int Mere::getN() {
  return n;
}

std::string Mere::getName(){
    return nom;
}

void Mere::afficher() {
    std::cout << "Mere\n";
}

int Mere::n=0;