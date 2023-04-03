/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:04:02 by vmuller           #+#    #+#             */
/*   Updated: 2023/04/03 17:23:48 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string arme) : name(arme)
{
	return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string& Weapon::getType()
{
	return(this->name);
}


void Weapon::setType(std::string name)
{
	this->name = name;
}