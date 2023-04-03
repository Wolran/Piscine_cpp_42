/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:04:10 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/03 17:41:31 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string arme) : name(arme), arme(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon& arme) 
{
    this->arme = &arme;
}

void HumanB::attack(void)
{
	if (this->arme == NULL)
		std::cout << this->name << " dosent have weapon for fight" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->arme->getType() << std::endl;
	return ;
}