#ifndef CURE_H
#define CURE_H

#include "amateria.h"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& other);
	
		AMateria* clone() const;
		void use(ICharacter& target);
		Cure& operator=(const Cure& other);
};

#endif
