#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "imateriasource.h"
#include "amateria.h"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* _templates[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
	
		void learnMateria(AMateria*materia);
		AMateria* createMateria(const std::string& type);
		MateriaSource& operator=(const MateriaSource& other);
};

#endif
