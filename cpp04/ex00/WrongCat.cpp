/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:54:43 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/28 15:58:52 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat Default constructor." << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor." << std::endl;
}

WrongCat::WrongCat(WrongCat const &to_copy): WrongAnimal(to_copy)
{
	std::cout << "WrongCat Copy constructor." << std::endl;
	*this = to_copy;
}

WrongCat &WrongCat::operator = (WrongCat const &to_set_to)
{
	std::cout << "WrongCat Assignation constructor." << std::endl;
	this->type = to_set_to.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}