/* *************Dog************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:04:54 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/27 17:24:54 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default constructor." << std::endl;
	type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor." << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	std::cout << "Dog Copy constructor." << std::endl;
	*this = copy;
}

Dog &Dog::operator = (Dog const &to_set)
{
	std::cout << "Dog Assignation constructor." << std::endl;
	this->type = to_set.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}