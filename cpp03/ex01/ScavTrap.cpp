/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:24:58 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/19 21:00:24 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	std::cout << "ScavTrap Constructor called for " << Name << std::endl;
	points = 100;
	energie = 50;
	damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) 
{
	std::cout << "ScavTrap Copy constructor called for " << Name << std::endl;
}

ScavTrap::~ScavTrap() 
{
	std::cout << "ScavTrap Destructor called for " << Name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) 
{
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	std::cout << "ScavTrap Assignation operator called for " << Name << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) 
{
	if (this->energie > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}

void ScavTrap::guardGate() 
{
	if (this->energie > 0)
	{
		std::cout << "ScavTrap " << Name << " has entered in Gate keeper mode" << std::endl;
		energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}