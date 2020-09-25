
#include "Fille.hpp"
#include <cstdlib>
#include <iostream>

int main(int, char **) {
	Mere  *pm = new Mere("mere_dyn");
	Fille *pf = new Fille("fille_dyn");
	Mere  *pp = new Fille("fille vue comme mere");
	pm->afficher(); // affiche Mere
	pf->afficher(); // affiche Fille
	pp->afficher(); // affiche Fille
	delete pm;
	delete pf;
	delete pp;
  return 0;
}
