#include "character.h"

Character::Character(const std::string& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

const std::string& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int dest;

	if (!m)
	{
		std::cout << "Character: cannot equip null materia" << std::endl;
		return ;
	}
	for (dest = 0; dest < 4; dest++)
		if (!_inventory[dest])
			break;
	if (dest > 3)
	{
		std::cout << "Character: inventory is full" << std::endl;
		return ;
	}
	_inventory[dest] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Character: item " << idx << " is out of range" << std::endl;
		return ;
	}

	AMateria* item = _inventory[idx];
	if (!item)
	{
		std::cout << "Character: no item at index " << idx << std::endl;
		return ;
	}
	_inventory[idx] = NULL;
	_garbage.add(item);
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Character: item " << idx << " is out of range" << std::endl;
		return ;
	}

	AMateria* item = _inventory[idx];
	if (!item)
	{
		std::cout << "Character: no item at index " << idx << std::endl;
		return ;
	}
	item->use(target);
}

Character& Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
	_garbage.clean();

	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}

	return *this;
}
