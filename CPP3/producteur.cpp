#include "producteur.hpp"
#include <fstream>
#include <fstream>



Producteur::Producteur() : travail(0) { }

int Producteur::getTravail() {
	return travail;
}

void Producteur::incTravail() {
	travail++;
}

bool Producteur::produire(int quantite, std::string nom) {
	bool aOuvert = false;
	incTravail();

	std::ofstream fichier;
	fichier.open(nom.c_str());
	// ou faire du 2 en 1 : std::ofstream fichier(nom.c_str());

	if (!fichier.fail()) {
		aOuvert = true;
		fichier << quantite << std::endl;
		for (int i=0; i<quantite; i++) {
			fichier << i+1 << std::endl;
		}
		fichier.close();
	}

	return aOuvert;
}
