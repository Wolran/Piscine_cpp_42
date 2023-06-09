#ifndef CHARACTERGARBAGE_H
#define CHARACTERGARBAGE_H

#include "amateria.h"

class CharacterGarbage
{
	private:
		struct Node
		{
			AMateria* value;
			Node* next;
		};
		Node* _first;
		Node* _last;
	
	public:
		CharacterGarbage();
		CharacterGarbage(const CharacterGarbage& other);
		~CharacterGarbage();
	
		void add(AMateria *materia);
		void clean();
		CharacterGarbage& operator=(const CharacterGarbage& other);
};

#endif
