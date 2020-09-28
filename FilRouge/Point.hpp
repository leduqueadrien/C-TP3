
#ifndef POINT
#define POINT

#include <string>

class Point
{
private:
    int x;
    int y;
    
public:
    Point();
    Point(int, int);

    int getX();
    void setX(int);
    int getY();
    void setY(int);

    void deplacerDe(int, int);
    void deplacerVers(int, int);
    std::string toString();
};



#endif