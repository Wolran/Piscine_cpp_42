/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:32:46 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/27 16:40:12 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "FragTrap Constructor called for " << Name << std::endl;
	points = 100;
	energie = 100;
	damage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) 
{
	std::cout << "FragTrap Copy constructor called for " << Name << std::endl;
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap Destructor called for " << Name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	std::cout << "FragTrap Assignation operator called for " << Name << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target) 
{
	if (this->energie > 0)
	{
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->energie > 0)
	{
		std::cout << "Hey, let's give me five guys! *hold up hand*" << std::endl;
		energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}