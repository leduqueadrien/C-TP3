
#ifndef FORME
#define FORME

#include "Point.hpp"

class Forme
{
private:
    Point point;
    int w;
    int h;
    static int nbForme;

public:
    Forme();
    Forme(int, int, int, int);
    int getW();
    int getH();
    void setW(int);
    void setH(int);
    static int getNbForme();
    ~Forme();
};


#endif