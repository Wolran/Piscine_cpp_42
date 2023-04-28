/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:04:50 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:44:57 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Animal")
{
	std::cout << "Animal Default constructor." << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor." << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "*Sound*" << std::endl;
}

std::string const &Animal::getType(void) const
{
	return (this->type);
}

Animal::Animal(Animal const &to_copy)
{
	std::cout << "Animal Copy constructor." << std::endl;
	*this = to_copy;
}

Animal &Animal::operator = (Animal const &to_set)
{
	std::cout << "Animal Assignation constructor." << std::endl;
	this->type = to_set.type;
	return (*this);
}