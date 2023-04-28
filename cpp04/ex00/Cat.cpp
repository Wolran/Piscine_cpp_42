/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:04:47 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 16:14:34 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default constructor." << std::endl;
	type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor." << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	std::cout << "Cat Copy constructor." << std::endl;
	*this = copy;
}

Cat &Cat::operator = (Cat const &to_set)
{
	std::cout << "Cat Assignation constructor." << std::endl;
	this->type = to_set.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}