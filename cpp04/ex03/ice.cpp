#include "ice.h"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(const Ice& other) : AMateria(other._type)
{}

AMateria* Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
	_type = other._type;
	return *this;
}
