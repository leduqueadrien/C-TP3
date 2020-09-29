
#ifndef FILLE
#define FILLE

#include "Mere.hpp"

class Fille : public Mere
{
private:
    std::string nom;
public:
    static int nbFille;
    std::string getName(); 
    int entierFille;
    Fille(std::string);
    Fille();

    ~Fille();
};



#endif