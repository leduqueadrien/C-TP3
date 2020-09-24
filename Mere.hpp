
#ifndef MERE
#define MERE

#include <iostream>

class Mere
{
private:
    static int n;
    std::string nom;
    
public:
    Mere();
    Mere(std::string);
    static int getN();
    std::string getName(); 
    ~Mere();
    void afficher();
};

#endif