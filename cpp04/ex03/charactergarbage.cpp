#include "charactergarbage.h"

CharacterGarbage::CharacterGarbage() : _first(NULL), _last(NULL)
{}

CharacterGarbage::CharacterGarbage(const CharacterGarbage& other) : _first(NULL), _last(NULL)
{
	Node* node;

	node = other._first;
	if (!node)
		return;
	_first = new Node();
	_first->value = node->value->clone();
	_last = _first;
	node = node->next;
	while (node)
	{
		_last->next = new Node();
		_last = _last->next;
		_last->value = node->value->clone();
		_last->next = NULL;
	}
}

CharacterGarbage::~CharacterGarbage()
{
	clean();
}

void CharacterGarbage::add(AMateria* materia)
{
	if (!materia)
	{
		std::cout << "CharacterGarbage: cannot add null materia" << std::endl;
		return ;
	}
	if (!_first)
	{
		_first = new Node();
		_first->value = materia;
		_first->next = NULL;
		_last = _first;
		return;
	}
	_last->next = new Node();
	_last = _last->next;
	_last->value = materia;
	_last->next = NULL;
}

void CharacterGarbage::clean()
{
	Node *node;
	Node *tmp;

	node = _first;
	while (node)
	{
		tmp = node;
		delete node->value;
		node = node->next;
		delete tmp;
	}
	_first = NULL;
	_last = NULL;
}

CharacterGarbage& CharacterGarbage::operator=(const CharacterGarbage& other)
{
	clean();
	Node* node;

	node = other._first;
	if (!node)
		return *this;
	_first = new Node();
	_first->value = node->value->clone();
	_last = _first;
	node = node->next;
	while (node)
	{
		_last->next = new Node();
		_last = _last->next;
		_last->value = node->value->clone();
		_last->next = NULL;
	}
	return *this;
}
