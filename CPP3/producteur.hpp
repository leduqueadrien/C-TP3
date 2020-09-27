#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur {
	private :
		int travail;
	
	public :
		Producteur();
		int getTravail();
		void incTravail();
		bool produire(int, std::string);
};

#endif
