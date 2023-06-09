#ifndef CHARACTER_H
#define CHARACTER_H

#include "icharacter.h"
#include "amateria.h"
#include "charactergarbage.h"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
		CharacterGarbage _garbage;

	public:
		Character(const std::string& name);
		Character(const Character& other);
		~Character();
	
		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character& operator=(const Character& other);
};
#endif