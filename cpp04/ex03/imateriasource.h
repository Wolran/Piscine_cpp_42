#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include <string>
#include "amateria.h"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif
