
#ifndef RECTANGLE
#define RECTANGLE

#include <string>
#include "Point.hpp"
#include "Forme.hpp"

class Rectangle : public Forme {
private:
    int w;
    int h;
    
public:
    Rectangle();
    Rectangle(int, int, int, int);
    std::string toString();

};



#endif