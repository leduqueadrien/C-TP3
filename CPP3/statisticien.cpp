#include "statisticien.hpp"
#include <fstream>


Statisticien::Statisticien() : calcul(false) {}

void Statisticien::acquerir(std::string nom) {
	std::ifstream fichier;
	
	fichier.open(nom.c_str());
	if (!fichier.fail()) {
		int max;
		double sum = 0;
		int i = 0;
		fichier >> max;
		while(!fichier.eof() && i<max) {
			int nombre;
			fichier >> nombre;
			sum += nombre;
			i++;
		}
		somme = sum;
		moyenne = sum/max;
	}
}

double Statisticien::getSomme() {
	return somme;
}

double Statisticien::getMoyenne() {
	return moyenne;
}

bool Statisticien::aCalcule() {
	return calcul;
}