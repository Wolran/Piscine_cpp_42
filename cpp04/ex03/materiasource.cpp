#include "materiasource.h"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_templates[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _templates[i];
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int idx;

	if (!materia)
	{
		std::cout << "MateriaSource: cannot learn null materia" << std::endl;
		return ;
	}
	for (idx = 0; idx < 4; idx++)
		if (!_templates[idx])
			break;
	if (idx >= 4)
	{
		std::cout << "MateriaSource is full" << std::endl;
		return ;
	}
	_templates[idx] = materia;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	int idx;
	for (idx = 0; idx < 4; idx++)
		if (_templates[idx] && _templates[idx]->getType() == type)
			break;
	if (idx > 3)
	{
		std::cout << "MateriaSource " << type << " no such type" << std::endl;
		return NULL;
	}
	return _templates[idx]->clone();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < 4; i++)
	{
		delete _templates[i];
		_templates[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
		if (other._templates[i])
			_templates[i] = other._templates[i]->clone();
	return *this;
}
