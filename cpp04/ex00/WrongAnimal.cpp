/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:54:47 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:00:04 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor." << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &to_copy)
{
	std::cout << "WrongAnimal Copy constructor." << std::endl;
	*this = to_copy;
}

WrongAnimal &WrongAnimal::operator = (WrongAnimal const &to_set_to)
{
	std::cout << "WrongAnimal Assignation constructor." << std::endl;
	this->type = to_set_to.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong_Sound" << std::endl;
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->type);
}