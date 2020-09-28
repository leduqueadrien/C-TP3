
#include <string>
#include <iostream>
#include <sstream>
#include "Point.hpp"

// Des "{", les champs sot TOUS CREER
// L'afectation des valeurs des variables doit se faire a la creation de l'objet i.e. avant "{"
// Sinon, on creer l'objet,puis on fait une copie de la nouvelle valeur que les champs doivent prendre
Point::Point() : Point(0, 0) {}

Point::Point(int X, int Y) : x(X), y(Y) {}

int Point::getX() {
	return x;
}

void Point::setX(int nouveauX) {
	x = nouveauX;
}

int Point::getY() {
	return y;
}

void Point::setY(int nouveauY) {
	y = nouveauY;
}



void Point::deplacerDe(int deplacementX, int deplacementY) {
	setX(getX() + deplacementX);
	setY(getY() + deplacementY);
}

void Point::deplacerVers(int nouveauX, int nouveauY) {
	setX(nouveauX);
	setY(nouveauY);
}

std::string Point::toString() {
	std::string chaine;
	std::ostringstream ossx;
	std::ostringstream ossy;
	ossx << getX();
	ossy << getY();
	chaine = "x=";
	chaine += ossx.str();
	chaine += ", y=";
	chaine += ossy.str();

	return chaine;
}