#ifndef ICE_H
#define ICE_H

#include "amateria.h"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
	
		AMateria* clone() const;
		void use(ICharacter& target);
		Ice& operator=(const Ice& other);
};

#endif
