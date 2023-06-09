#include "cure.h"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure& other) : AMateria(other._type)
{}

AMateria* Cure::clone() const
{
	return new Cure;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	_type = other._type;
	return *this;
}
