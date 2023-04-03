/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmuller <vmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 05:31:15 by vmuller           #+#    #+#             */
/*   Updated: 2023/03/23 05:26:44 by vmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " successfully delete" << std::endl;
}

 void Zombie::SetNameZom(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " successfully created" << std::endl;
}

void Zombie::AnnonceZombie(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
