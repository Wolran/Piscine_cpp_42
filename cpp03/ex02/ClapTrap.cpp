/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 14:23:34 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/27 16:55:39 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): points(10), energie(10), damage(0)
{
	std::cout << "Default ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): points(10), energie(10), damage(0)
{
	this->Name = name;
	std::cout << "ClapTrap " << this->Name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->Name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energie > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
		this->energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energie > 0)
	{
		this->points += amount;
		std::cout << "ClapTrap " << Name << " was repaired by "<< amount << ", " << points << "hp left" << "!" << std::endl;
		this->energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (energie > 0)
	{
		points -= amount;
		if (points < 0)
			points = 0;
		std::cout << "ClapTrap " << Name << " took "<< amount << " points of damage!" << ", " << points << "hp left" << std::endl;
		energie--;
	}
	else
		std::cout << "no energie left" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	Name = other.Name;
	points = other.points;
	energie = other.energie;
	damage = other.damage;
	return *this;
}

const std::string& ClapTrap::name() const
{
	return Name;
}

int ClapTrap::attackDamage() const
{
	return damage;
}